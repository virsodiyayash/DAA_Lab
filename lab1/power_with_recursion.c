#include<stdio.h>

int answer = 1;

int powerOfNumber(int number , int power ){

    if(power == 0){
        return answer;
    }

    answer = answer * number;

    return powerOfNumber(number , power - 1);

}

void main(){

    int number;
    int power;
    int answer;

    printf("Enter the number = ");
    scanf("%d" , &number);

    printf("Enter the power = ");
    scanf("%d" , &power);

    answer = powerOfNumber(number , power);

    printf("The answer is = %d" , answer);

}