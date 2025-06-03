//Write a C function to implement Dijkstra’s algorithm for shortest path in a weighted graph.

/*
Concepts:
>>Dijkstra’s Algorithm finds the shortest path in a weighted graph with non-negative weights.

# It maintains:

>>A dist[] array to store the minimum distance from the source.

>>A visited[] array to mark vertices whose minimum distance is finalized.

*/

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define V 6 //number of vertices in the graph

//finding the vertex with the minimum distance value from the set of vertices not yet processed
int minDistance(int dist[], bool visited[]){
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++){
        if(!visited[v] && dist[v] <= min){
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

//printing the shortest distance array
void printSolution(int dist[],int src){
    printf("Vertex\tDistance from Source%d\n",src);
    for(int i = 0; i < V; i++){
        printf("%d\t%d\n",i,dist[i]);
    }
}

//Dijkstra’s algorithm using adjacency matrix
void dijkstra(int graph[V][V],int src){
    int dist[V];       //output array: dist[i] holds shortest distance from src to i
    bool visited[V];   //visited[i] is true if shortest distance to i is finalized

    //step 1:initialize all distances as INFINITE and visited[] as false
    for(int i = 0; i < V; i++){
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    dist[src] = 0; //distance from source to itself is always 0

    //finding shortest path for all vertices
    for(int count = 0; count < V - 1; count++){
        int u = minDistance(dist, visited); //pick the min distance vertex
        visited[u] = true; //mark it as processed

        //update distance value of adjacent vertices of the picked vertex
        for(int v = 0; v < V; v++){
            if(!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]){
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist,src);
}

//main fun to test the algorithm
int main(){
    //adjacency matrix: 0 means no edge
    int graph[V][V] = {
        {0, 4, 0, 0, 0, 0},
        {4, 0, 8, 0, 0, 0},
        {0, 8, 0, 7, 0, 4},
        {0, 0, 7, 0, 9, 14},
        {0, 0, 0, 9, 0, 10},
        {0, 0, 4, 14, 10, 0}
    };

    int source = 0;
    dijkstra(graph, source);

    return 0;
}
