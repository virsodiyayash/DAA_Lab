#include<stdio.h>
#include<stdlib.h>

int rear = -1;
int front = -1;

#define SIZE 50

int queue[SIZE];

void enqueue(int value){

    if(rear > SIZE){
        printf("The queue is overflow");
    }

    if(front == -1 && rear == -1){
        front++;
    }

    queue[++rear] = value;
}

int dequeue(){
    if(front == -1 || front > rear){
        printf("Queue is overflow");
        return 0;
    }

    return queue[front++];
}

void displayQueue(){

    if(front == -1 || front > rear){
        printf("Queue is Empty");
        return;
    }

    printf("The elements of the queue are ");

    for(int i = front ; i <= rear ; i++){
        printf("%d" , queue[i]);
    }
}

void main(){

     while(1){
        printf("Enter 1 for enqueue , 2 for dequeue , 3 for display ");
        int operation;
        scanf("%d" , &operation);
        int pushElement;
        int ans;

        switch(operation){

            case 0:
                exit(0);
                break;

            case 1:
                printf("Enter the value you want to add into the queue");
                scanf("%d" , &pushElement);
                enqueue(pushElement);
                break;

            case 2:
                ans = dequeue();
                printf("The popped Element is %d" , ans);
                break;

            case 3:
                displayQueue();
                break;

            default:
                printf("You entered invalid position");

        }
    }

}