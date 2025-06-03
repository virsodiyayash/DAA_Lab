#include<stdio.h>

void main(){

    int number;
    int count = 0;

    printf("Enter the number = ");
    scanf("%d" , &number);

    while(number != 0){
        number = number / 10;
        count++;
    }

    printf("The count of the number is = %d" , count);

}