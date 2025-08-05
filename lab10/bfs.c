#include<stdio.h>

#define v 8
int queue[v];
int front = -1;
int end = -1;

void findBFS(int graph[v][v] , int visited[v] , int index){
    enqueue(index);
    visited[index] = 1;

    while(!(front < v - 1)){
        int num = dequeue();
        for(int i = 0 ; i < v ; i++){
            if(visited[index] == 0 && graph[num][i] != 0){
                enqueue(i);
                visited[i] = 1;
                printf("::: %d ::: ",i);
            }
        }
    }
}

void bfs(int graph[v][v] , int key){
    int visited[v] = {0};
    queue[v] = {0};
}

int dequeue(){
    if(front >= end) return;
    if(front == -1) return;

    return queue[front++];
}

void enqueue(int num){
    if(front == -1){
        front = 0;
        end = 0;
    }

    if(end > v - 1){
        return;
    }
    queue[end] = num;
    end++;
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

    bfs(graph , 0);
}