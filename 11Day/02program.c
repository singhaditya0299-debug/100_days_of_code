// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main(){
    float c , s ;
    printf("Enter the value of cost price:\n");
    scanf("%f",&c);
    printf("Enter the value of selling prize:\n");
    scanf("%f",&s);
    if(c>s){
        printf("You have a loss and your loss percentage is %.00f",(c-s)/c*100);
    }
    else if(s>c){
        printf("You have a profit and your profit percentage is %.00f",(s-c)/c*100);
    }
    else{
        printf("No profit,No loss");
    }
    return 0;
}