#include<stdio.h>

void main(){

    int number;
    int power;
    int answer = 1;

    printf("Enter the number = ");
    scanf("%d" , &number);

    printf("Enter your power = ");
    scanf("%d" , &power);

    for(int i = 1 ; i <= power ; i++){
        answer = answer * number;
    }

    printf("The answer is = %d" , answer);

}