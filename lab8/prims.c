#include<stdio.h>
#include<limits.h>
#define v 5
void main(){
    // int v = 5;

    int edges[v][v] = {
        {0 , 2 , 0 , 6 , 0},
        {2 , 0 , 3 , 8 , 5},
        {0 , 3 , 0 , 0 , 7},
        {6 , 8 , 0 , 0 , 9},
        {0 , 5 , 7 , 9 , 0}
    };

    int visited[v] = {0, 0, 0, 0, 0};

    int edge = 0;
    int cost = 0;

    visited[0] = 1;


    while(edge < v - 1) {
        int x = 0;
        int y = 0;
        int minEdge = INT_MAX;

        for(int i = 0 ; i < v ; i++){
            if(visited[i] == 1){
                for(int j = 0 ; j < v ; j++){
                    if(visited[j] == 0 && edges[i][j] != 0){
                        if(edges[i][j] < minEdge){
                            minEdge = edges[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
                visited[y] = 1;
                cost = cost + minEdge;
                edge++;
    }
    printf("The count is %d",cost);
}