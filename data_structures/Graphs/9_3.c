//Write a C function to find the shortest path between two vertices in an unweighted graph using BFS.

/*
##concep:-
Useing BFS starting from the source vertex.

##Keep track of:-
->>Visited vertices
->>Predecessor (parent) of each node to reconstruct the path.
->>Distance from source
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 100

//adjacency list node
struct Node{
    int vertex;
    struct Node* next;
};

//graph structure
struct Graph{
    int V;
    struct Node* adjList[MAX_VERTICES];
};

//create a new node
struct Node* createNode(int v){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

//create a graph
struct Graph* createGraph(int V){
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    for(int i = 0; i < V; i++){
        graph->adjList[i] = NULL;
    }
    return graph;
}

//add edge (undirected)
void addEdge(struct Graph* graph,int src,int dest){
    struct Node* node = createNode(dest);
    node->next = graph->adjList[src];
    graph->adjList[src] = node;

    node = createNode(src);
    node->next = graph->adjList[dest];
    graph->adjList[dest] = node;
}

//print shortest path from source to destination
void printPath(int parent[],int vertex){
    if(parent[vertex] == -1){
        printf("%d",vertex);
        return;
    }
    printPath(parent,parent[vertex]);
    printf("%d",vertex);
}

//BFS to find shortest path
void bfsShortestPath(struct Graph* graph,int start,int end){
    bool visited[MAX_VERTICES] = {false};
    int parent[MAX_VERTICES];
    int distance[MAX_VERTICES];
    int queue[MAX_VERTICES];
    int front = 0,rear = 0;

    for(int i = 0; i < graph->V; i++){
        parent[i] = -1;
        distance[i] = -1;
    }

    //initialize BFS
    visited[start] = true;
    distance[start] = 0;
    queue[rear++] = start;

    while(front < rear){
        int current = queue[front++];

        struct Node* temp = graph->adjList[current];
        while(temp){
            int neighbor = temp->vertex;
            if(!visited[neighbor]){
                visited[neighbor] = true;
                parent[neighbor] = current;
                distance[neighbor] = distance[current] + 1;
                queue[rear++] = neighbor;

                //stop if we reach the end
                if (neighbor == end){
                    printf("Shortest path length:%d\n",distance[neighbor]);
                    printf("Path:");
                    printPath(parent,end);
                    printf("\n");
                    return;
                }
            }
            temp = temp->next;
        }
    }

    printf("No path exists from %d to %d\n",start,end);
}

//main fun to test the BFS shortest path
int main(){
    struct Graph* graph = createGraph(6);
    
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,3);
    addEdge(graph,2,4);
    addEdge(graph,3,5);
    addEdge(graph,4,5);

    int start = 0;
    int end = 5;

    bfsShortestPath(graph,start,end);

    return 0;
}
