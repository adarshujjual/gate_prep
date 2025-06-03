//Write a C function to find the minimum spanning tree of a graph using Kruskal’s algorithm.

/*
#Kruskal’s Algorithm Overview:-

>>Sort all edges in increasing order of weight.
>>Use Union-Find (Disjoint Set Union - DSU) to detect cycles.
>>Add edges to the MST if they don’t form a cycle.
>>Repeat until MST has V - 1 edges.

##Data Structures:
>> Edge list to represent the graph.
>> Union-Find (DSU) to detect cycles.
*/

#include <stdio.h>
#include <stdlib.h>

//structure to represent an edge
struct Edge{
    int src,dest,weight;
};

//structure to represent a graph
struct Graph{
    int V,E;
    struct Edge* edges;
};

//create a graph
struct Graph* createGraph(int V, int E){
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->E = E;
    graph->edges = (struct Edge*)malloc(E * sizeof(struct Edge));
    return graph;
}

//Disjoint Set Union (DSU) utility
int find(int parent[],int i){
    if(parent[i] != i){
        parent[i] = find(parent, parent[i]); //path compression
    }
    return parent[i];
}

void unionSets(int parent[],int rank[],int x,int y){
    int rootX = find(parent,x);
    int rootY = find(parent,y);

    //union by rank
    if(rank[rootX] < rank[rootY]){
        parent[rootX] = rootY;
    }
    else if(rank[rootX] > rank[rootY]){
        parent[rootY] = rootX;
    }
    else{
        parent[rootY] = rootX;
        rank[rootX]++;
    }
}

//compare function for qsort (sort by edge weight)
int compareEdges(const void* a, const void* b){
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

//Kruskal's algorithm

void kruskalMST(struct Graph* graph){
    int V = graph->V;
    struct Edge result[V];  //store MST edges
    int e = 0;  //count of edges in MST

    //step 1:sort edges by weight
    qsort(graph->edges,graph->E,sizeof(struct Edge),compareEdges);

    //allocate memory for DSU
    int* parent = (int*)malloc(V * sizeof(int));
    int* rank = (int*)malloc(V * sizeof(int));

    //initialize DSU
    for(int v = 0; v < V; v++){
        parent[v] = v;
        rank[v] = 0;
    }

    int i = 0;//index for sorted edges
    while(e < V - 1 && i < graph->E){
        struct Edge nextEdge = graph->edges[i++];

        int x = find(parent,nextEdge.src);
        int y = find(parent,nextEdge.dest);

        //if no cycle,include it
        if(x != y){
            result[e++] = nextEdge;
            unionSets(parent,rank,x,y);
        }
        //else discard the edge
    }

    //printing MST
    printf("Edges in the Minimum Spanning Tree:\n");
    int totalWeight = 0;
    for(i = 0; i < e; i++){
        printf("%d -- %d == %d\n",result[i].src,result[i].dest,result[i].weight);
        totalWeight += result[i].weight;
    }
    printf("Total weight of MST:%d\n",totalWeight);

    free(parent);
    free(rank);
}

//main fun to test Kruskal's algorithm
int main(){
    int V = 4; //number of vertices
    int E = 5; //number of edges

    struct Graph* graph = createGraph(V,E);

    //adding edges: {src,dest,weight}
    graph->edges[0] = (struct Edge){0,1,10};
    graph->edges[1] = (struct Edge){0,2,6};
    graph->edges[2] = (struct Edge){0,3,5};
    graph->edges[3] = (struct Edge){1,3,15};
    graph->edges[4] = (struct Edge){2,3,4};

    kruskalMST(graph);

    free(graph->edges);
    free(graph);

    return 0;
}

/*
Output:
Edges in the Minimum Spanning Tree:
2 -- 3 == 4
0 -- 3 == 5
0 -- 1 == 10
Total weight of MST:19
*/