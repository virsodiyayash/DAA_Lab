#include<stdio.h>

int factorial(int number){

    if(number == 0 || number == 1){
        return 1;
    }

    return number * factorial(number - 1);

}

void main(){

    int number;
    int ans;

    printf("Enter the number = ");
    scanf("%d" , &number);

    ans = factorial(number);

    printf("The answer is = %d" , ans);

}
