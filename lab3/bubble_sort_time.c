#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSort(int arr[], int size); 

void main(){

    FILE *file;
    int arr[100000];
    clock_t start, end;
    double cpu_time;

    file = fopen("worst_case.txt" , "r");

    for(int i = 0 ; i < 100000 ; i++){
        fscanf(file , "%d" , &arr[i]);
    }

    fclose(file);

    printf("::::: Best case time :::::\n");

    start = clock();
    bubbleSort(arr , 100000);
    end = clock();

    cpu_time = ((double) (end - start) / CLOCKS_PER_SEC);

    printf("%f" , cpu_time);
}

void bubbleSort(int arr[] , int size){
    
    for(int i = 0 ; i < size - 1; i++){
        int swapped = 0;
        for(int j = i + 1 ; j < size ; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
        }

        if(swapped == 0){
            break;
        }
        
    }

    // for(int i = 0 ; i < size ; i++){
    //     printf("%d " , arr[i]);
    // }
}