#include<stdio.h>

int fibonnaci(int number){

    if(number == 0){
        return 0;
    }

    else if(number == 1){
        return 1;
    }

    return fibonnaci(number - 1) + fibonnaci(number - 2);

}

void main(){

    int number;

    printf("Enter the number = ");
    scanf("%d" , &number);

}