#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selectionSort(int arr[], int size); 

void main(){

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
    selectionSort(arr , 100000);
    end = clock();

    cpu_time = ((double) (end - start) / CLOCKS_PER_SEC);

    printf("%f" , cpu_time);
}

void selectionSort(int arr[] , int size){
    
    for(int i = 0 ; i < size - 1 ; i++){
        int min = i;

        for(int j = i ; j < size ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    // for(int i = 0 ; i < size - 1 ; i++){
    //     printf("%d " , arr[i]);
    // }
}


// #include<stdio.h>

// void main(){
//     int arr[] = {10 , 5 , 7 , 8 , 3 , 4 , 2 , 9 , 6 , 1};

//     for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) - 1 ; i++){
//         int min = i;

//         for(int j = i ; j < sizeof(arr)/sizeof(arr[0]) - 1 ; j++){
//             if(arr[j] < arr[min]){
//                 min = j;
//             }
//         }
//         int temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }

//     for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) - 1 ; i++){
//         printf("%d " , arr[i]);
//     }
// }