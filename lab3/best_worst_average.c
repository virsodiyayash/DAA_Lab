#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *file;

    //Best Case
    file = fopen("best_case.txt" , "w");

    for(int i = 0 ; i < 100000 ; i++){
        fprintf(file , "%d " , i);
    }

    fclose(file);

    //average case
    file = fopen("average_case.txt" , "w");

    for(int i = 0 ; i < 100000 ; i++){
        fprintf(file , "%d " , rand()%100000);
    }

    fclose(file);


    //worst case
    file = fopen("worst_case.txt" , "w");

    for(int i = 99999 ; i >= 0 ; i--){
        fprintf(file , "%d " , i);
    }

    fclose(file);
}