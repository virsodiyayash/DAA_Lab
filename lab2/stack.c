#include<stdio.h>
#include<stdlib.h>

#define SIZE 100
int top = -1;

int stack[SIZE];

void push(int value){

if(top >= SIZE - 1){
    printf("Stack Overflow");
    return;
}

stack[++top] = value;
printf("The Element is added into the stack");

}

int pop(){
    if(top < 0){
        printf("Stack is underflow");
    }

    return stack[top--];
}

int peep(){
    if(top < 0){
        printf("Stack is Empty");
    }

    return stack[top];
}

void change(int position , int value){
    if(top - position + 1 < 0){
        printf("Invalid Position for change the items");
    }

    stack[top - position + 1] = value;
}

void display(){

    if(top < 0){
        printf("The stack is empty");
    }
    
    printf("Elements in the stack are");

    for(int i = top ; i >= 0 ; i--){
        printf("%d" , stack[i]);
    }

}

void main(){

    while(1){
        printf("Enter 1 for push , 2 for pop , 3 for peep , 4 for change , 5 for display and 6 for terminate");
        int operation;
        scanf("%d" , &operation);
        int pushElement;
        int changeElement;
        int pos;
        int ans;

        switch(operation){

            case 0:
                exit(0);
                break;

            case 1:
                printf("Enter the value you want to add into the stack");
                scanf("%d" , &pushElement);
                push(pushElement);
                break;

            case 2:
                ans = pop();
                printf("The popped Element is %d" , ans);
                break;

            case 3:
                ans = peep();
                printf("The peep element is %d" , ans);
                break;

            case 4:
                printf("Enter the position you want to change it");
                scanf("%d" , &pos);
                printf("Enter the element you want to add at that position");
                scanf("%d" , &changeElement);
                change(pos , changeElement);
                break;

            case 5:
                display();
                break;

            default:
                printf("You entered invalid position");

        }
    }

}