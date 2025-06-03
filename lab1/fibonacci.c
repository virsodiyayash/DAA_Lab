#include<stdio.h>

void main(){

    int number;
    int final = 0;

    printf("Enter the number = ");
    scanf("%d" , &number);

    int n1 = 0;
    int n2 = 1;

   
    for(int i = 0 ; i < number ; i++){

        if(i == 0){
            final = n1;
        }

        else if(i == 1){
            final = n2;
        }

        else{
            int temp = n2;
            n2 = n1 + n2;
            n1 = temp;
            final = n2;
        }
        printf("%d" , final);
      
    }

}

// if(number == 1){
//             int answer = n1 + n2;
//             printf("The answer is %d" , answer);
//         }

//  if(number == 1){
//             printf("The answer is %d" , n1);
//             return;
//     }


// 0 1 1 2 3 5