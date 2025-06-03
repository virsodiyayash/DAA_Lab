#include<stdio.h>

int sumOfNumbers(int number){

    if(number == 0){
        return 0;
    }

    return number + sumOfNumbers(number - 1);

}

void main(){

    int number;

    printf("Enter the number = ");
    scanf("%d" , &number);

    int answer = sumOfNumbers(number);
    printf("The answer is = %d" , answer);

}