#include<stdio.h>

void merge(int arr[] , int low , int mid , int high){

    int i = low;
    int j = mid + 1;
    int k = 0;
    int b [high - low + 1];

    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            b[k] = arr[i];
            i++;
        }
        else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= mid){
        b[k] = arr[i];
        i++;
        k++;
    }

    while(j <= high){
        b[k] = arr[j];
        j++;
        k++;
    }

    for(int i = low ; i <= high ; i++){
        arr[i] = b[i - low];
    }

}

void mergeSort(int arr[] , int low , int high){
    if(low < high){
        int mid = (low + high)/2;
        mergeSort(arr , low , mid);
        mergeSort(arr , mid + 1 , high);
        merge(arr , low , mid , high);
    }
}


void main(){

    int arr[] = {10 , 5 , 7 , 8 , 3 , 4 , 2 , 9 , 6 , 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr , 0 , size - 1);
    printf("ghjkl\n");
    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }
}