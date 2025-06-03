//Write a C function to detect a cycle in an undirected graph.

/*
>>In an undirected graph, a cycle exists if a visited node is found again and it's not the parent of the current
  node in the DFS tree.

##Algorithm(DFS-Based Cycle Detection):
>For each unvisited node:
->>Do DFS traversal.
->>During DFS, if you encounter an already visited neighbor that is not the parent, then a cycle exists.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//adjacency list node
struct Node{
    int vertex;
    struct Node* next;
};

//graph structure
struct Graph{
    int V;
    struct Node** adjList;
};

//create a new node
struct Node* createNode(int vertex){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}

//create a graph
struct Graph* createGraph(int V){
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->adjList = (struct Node**)malloc(V * sizeof(struct Node*));
    for (int i = 0; i < V; i++)
        graph->adjList[i] = NULL;
    return graph;
}

//add undirected edge
void addEdge(struct Graph* graph,int src,int dest){
    struct Node* node = createNode(dest);
    node->next = graph->adjList[src];
    graph->adjList[src] = node;

    node = createNode(src);
    node->next = graph->adjList[dest];
    graph->adjList[dest] = node;
}

//DFS utility to detect cycle:
bool isCyclicUtil(struct Graph* graph,int v,bool visited[],int parent){
    visited[v] = true;

    struct Node* temp = graph->adjList[v];
    while(temp != NULL){
        int adj = temp->vertex;

        if(!visited[adj]){
            if(isCyclicUtil(graph,adj,visited,v)){
                return true;
            }
        }
        //if visited and not parent → cycle
        else if(adj != parent){
            return true;
        }

        temp = temp->next;
    }

    return false;
}

//function to detect cycle in an undirected graph
bool hasCycle(struct Graph* graph){
    bool* visited = (bool*)malloc(graph->V * sizeof(bool));
    for(int i = 0; i < graph->V; i++){
        visited[i] = false;
    }
    for(int i = 0; i < graph->V; i++){
        if(!visited[i]){
            if(isCyclicUtil(graph,i,visited,-1)){
                free(visited);
                return true;
            }
        }
    }

    free(visited);
    return false;
}

//main fun to test the cycle detection
int main(){
    struct Graph* graph = createGraph(5);

    addEdge(graph,0,1);
    addEdge(graph,1,2);
    addEdge(graph,2,3);
    addEdge(graph,3,4);
    //Uncomment the below to introduce a cycle
    //addEdge(graph,4,1);

    if(hasCycle(graph)){
        printf("Cycle detected in the graph.\n");
    }else{
        printf("No cycle found in the graph.\n");
    }
    return 0;
}

//Time Complexity:
// O(V + E): We visit every vertex and edge once.


