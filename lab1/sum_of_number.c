#include<stdio.h>

void main(){

    int number;
    int j = 0;
    int answer = 0;

    printf("Enter the number = ");
    scanf("%d" , &number);

    for(int i = 1 ; i <= number ; i++){
        answer = answer + i;
    }

    printf("The answer is = %d" , answer);

}