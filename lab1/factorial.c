#include<stdio.h>

void main(){
    int number;

    printf("Enter the number = ");
    scanf("%d" , &number);
    int ans = 1;

    for(int i = 1 ; i <=  number ; i++){
        ans = ans * i;
    }

    printf("The answer is = %d" , ans);
}