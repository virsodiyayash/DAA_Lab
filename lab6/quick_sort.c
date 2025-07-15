#include<stdio.h>

int findPivot(int arr[] , int low , int high){
    int pivot = arr[low];
    int lowerBound = low;
    int upperBound = high+1;
    printf("lower ::::::::::::::::::: %d\n",lowerBound);

    do{
        lowerBound++;
    // printf("lower ::::::::::::::::::: %d\n",lowerBound);

    }
    while(lowerBound < high && arr[lowerBound] <= pivot);

    printf("lower ::::::::::::::::::: %d\n",lowerBound);
    do{
        upperBound--;
    }
    while(upperBound > low && arr[upperBound] > pivot);
        printf("upper ::::::::::::::::::: %d\n",upperBound);

    while(lowerBound < upperBound){
        int temp = arr[lowerBound];
        arr[lowerBound] = arr[upperBound];
        arr[upperBound] = temp;

        do{
        lowerBound++;
    // printf("lower ::::::::::::::::::: %d\n",lowerBound);

    }
    while(lowerBound < high && arr[lowerBound] <= pivot);

        do{
        upperBound--;
    }
    while(upperBound > low && arr[upperBound] > pivot);
    }
    int temp = arr[low];
        arr[low] = arr[upperBound];
        arr[upperBound] = temp;
        printf("pivot ::::::::::::::::::: %d\n",lowerBound);

    return upperBound;
}

void quickSort(int arr[] , int low , int high){
    
    if(low < high){
        int pivotIndex = findPivot(arr , low , high);
        printf("Quick sort is called ::::::::::::::::::: %d\n",pivotIndex);
        quickSort(arr , low , pivotIndex - 1);
        quickSort(arr , pivotIndex + 1 , high);
    }
}

void main(){
    int arr[] = {10 , 5 , 7 , 8 , 3 , 4 , 2 , 9 , 6 , 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr , 0 , size - 1);

    for(int i = 0 ; i < size ; i++){
        printf("%d " , arr[i]);
    }
}