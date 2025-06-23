#include<stdio.h>

void main(){

    int arr[] = {10 , 5 , 7 , 8 , 3 , 4 , 2 , 9 , 6 , 1};

    for(int i = 1 ; i < sizeof(arr)/sizeof(arr[0]) ; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++){
        printf("%d " , arr[i]);
    }

}