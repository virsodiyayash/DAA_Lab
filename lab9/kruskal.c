#include<stdio.h>
#include<stdlib.h>

struct Edge{
    int source;
    int destination;
    int weight;
};

//Without pointer
int compareEdges(struct Edge* a , struct Edge* b){
    return a->weight - b->weight;
};

int find(int parent[], int index){
    if(parent[index] == index){
        return index;
    }

    return find(parent , parent[index]);
};

int unionSet(int parent[] , int x , int y){
    int xRoot = find(parent, x);
    int yRoot = find(parent, y);

    if(xRoot != yRoot){
        
    }
}

int main(){
    struct Edge edges[] = {
       {0 , 1 , 7},
       {1 , 2 , 8},
       {0 , 3 , 5},
       {1 , 3 , 9},
       {2 , 4 , 5},
       {1 , 4 , 7},
       {3 , 5 , 6},
       {3 , 4 , 15},
       {4 , 5 , 8},
       {5 , 6 , 11},
       {4 , 6 , 9}
    };

    int E = 11;
    int V = 7;

    qsort(edges, e, sizeof(struct Edge), compareEdges);

    for(int i = 0 ; i < e ; i++){
        printf("Edge: %d - %d, Weight: %d\n", edges[i].source, edges[i].destination, edges[i].weight);
    }

    int parent[V];
    int mst[V - 1];




}