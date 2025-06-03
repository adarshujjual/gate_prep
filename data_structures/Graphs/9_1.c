//Write a C function to perform BFS on a graph.

/*
#What is BFS?
->> BFS traverses a graph level by level, exploring all neighbors before moving to the next level.
->> Implemented using a queue.
->>Useful for shortest path (unweighted graphs), connected components, etc.

#Assumptions:
->> Graph is represented using an adjacency list.
->> Nodes are labeled from 0 to V-1.
->> We use a visited[] array to avoid revisiting nodes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//adjacency list node
struct Node{
    int data;
    struct Node* next;
};

//graph structure
struct Graph{
    int V;
    struct Node** adjList;
};

//queue structure for BFS
struct Queue{
    int front,rear,size;
    int capacity;
    int* array;
};

//function to create a new adjacency list node
struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//create a graph with V vertices
struct Graph* createGraph(int V){
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->adjList = (struct Node**)malloc(V * sizeof(struct Node*));
    for (int i = 0; i < V; i++)
        graph->adjList[i] = NULL;
    return graph;
}

//add an edge (u-v) to the graph
void addEdge(struct Graph* graph,int u,int v){
    //add v to u's list
    struct Node* newNode = createNode(v);
    newNode->next = graph->adjList[u];
    graph->adjList[u] = newNode;

    //for undirected graph,add u to v's list too
    newNode = createNode(u);
    newNode->next = graph->adjList[v];
    graph->adjList[v] = newNode;
}

//queue operations
struct Queue* createQueue(int capacity){
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->capacity = capacity;
    q->front = q->size = 0;
    q->rear = capacity - 1;
    q->array = (int*)malloc(capacity * sizeof(int));
    return q;
}

bool isEmpty(struct Queue* q){
    return (q->size == 0);
}

void enqueue(struct Queue* q,int item){
    q->rear = (q->rear + 1) % q->capacity;
    q->array[q->rear] = item;
    q->size += 1;
}

int dequeue(struct Queue* q){
    int item = q->array[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size -= 1;
    return item;
}

//BFS function
void BFS(struct Graph* graph,int start){
    bool* visited = (bool*)malloc(graph->V * sizeof(bool));
    for(int i = 0; i < graph->V; i++){
        visited[i] = false;
    }
    struct Queue* q = createQueue(graph->V);

    visited[start] = true;
    enqueue(q,start);

    printf("BFS traversal starting from vertex %d:",start);

    while(!isEmpty(q)){
        int current = dequeue(q);
        printf("%d",current);

        //visiting all neighbors
        struct Node* temp = graph->adjList[current];
        while(temp){
            int adjVertex = temp->data;
            if(!visited[adjVertex]){
                visited[adjVertex] = true;
                enqueue(q,adjVertex);
            }
            temp = temp->next;
        }
    }

    printf("\n");

    free(visited);
    free(q->array);
    free(q);
}

//main fun to test the BFS
int main(){
    int V = 6;
    struct Graph* graph = createGraph(V);

    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,3);
    addEdge(graph,2,4);
    addEdge(graph,3,5);

    BFS(graph,0);  //start BFS from vertex 0

    return 0;
}

/*
note:
>>BFS uses a queue to explore nodes in breadth-first order.
>>Useful for shortest path in unweighted graphs.
>>Time complexity: O(V + E)
*/