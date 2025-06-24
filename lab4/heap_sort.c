#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void heapify(int arr [] , int size , int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < size && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < size && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        int swap = arr[i];
        arr[i] = arr[largest];
        arr[largest] = swap;
        heapify(arr , size , largest);
     }
}

void heapSort(int arr[] , int size){

    for(int i = size/2 - 1 ; i >= 0 ; i--){
        heapify(arr , size , i);
    }

    for(int i = size - 1 ; i > 0 ; i--){
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr , i , 0);
    }

}


int main(){

     FILE *file;
    int arr[100000];
    clock_t start, end;
    double cpu_time;

    file = fopen("../lab3/average_case.txt" , "r");

    for(int i = 0 ; i < 100000 ; i++){
        fscanf(file , "%d" , &arr[i]);
    }

    fclose(file);

    printf("::::: Best case time :::::\n");

    start = clock();
    heapSort(arr , 100000);
    end = clock();

    cpu_time = ((double) (end - start) / CLOCKS_PER_SEC);

    printf("%f" , cpu_time);

    return 0;
}