#include<stdio.h>

#define v 8

void findDFS(int graph[v][v] , int visited[] , int index){
    visited[index] = 1;
    printf("::: %d :::" , index + 1);

    for(int i = 0 ; i < v ; i++){
        if(visited[i] == 0 && graph[index][i] != 0){
            findDFS(graph , visited , i);
        }
    }
}

void dfs(int graph[v][v] , int key){
    int visited[v] = {0};
    findDFS(graph , visited , key);
}

void main(){
    int graph[v][v] = {
        {0 , 1 , 1 , 1 , 1 , 0 , 0 , 0},
        {1 , 0 , 0 , 0 , 0 , 1 , 0 , 0},
        {1 , 0 , 0 , 0 , 0 , 1 , 0 , 0},
        {1 , 0 , 0 , 0 , 0 , 0 , 1 , 0},
        {1 , 0 , 0 , 0 , 0 , 0 , 1 , 0},
        {0 , 1 , 1 , 0 , 0 , 0 , 0 , 1},
        {0 , 0 , 0 , 1 , 1 , 0 , 0 , 1},
        {0 , 0 , 0 , 0 , 0 , 1 , 1 , 0}
    };

    dfs(graph , 0);
}