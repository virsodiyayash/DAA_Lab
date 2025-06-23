#include<stdio.h>
void main(){

    int arr[] = {10 , 5 , 7 , 8 , 3 , 4 , 2 , 9 , 6 , 1};

    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) - 1; i++){
        int swapped = 0;
        for(int j = i + 1 ; j < sizeof(arr)/sizeof(arr[0]) ; j++){
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

    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++){
        printf("%d " , arr[i]);
    }

}