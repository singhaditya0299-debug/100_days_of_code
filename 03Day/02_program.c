//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter the first value:\n");
    scanf("%d",&a);
    printf("Enter the second value:\n");
    scanf("%d",&b);
    printf("Before the value of first and second value is %d and %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Before the value of first and second value is %d and %d",a,b);
    return 0;
}