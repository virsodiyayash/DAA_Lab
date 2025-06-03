#include<stdio.h>

int countDigit(int number , int count){

    if(number == 0){
        return count;
    }

    count++;

    return countDigit(number/10 , count);

}

void main(){

    int number;

    printf("Enter the number = ");
    scanf("%d" , &number);

    int count = 0;

    int answer = countDigit(number , count);

    printf("The answer is = %d" , answer);

}
