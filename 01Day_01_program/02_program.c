//  Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter your first number\n");
    scanf("%d",&a);
    printf("Enter your second number\n");
    scanf("%d",&b);
    printf("The sum , subtraction ,product, division and modulus of these two number are %d ,%d ,%d ,%d and %d respectively",a+b,a-b,a*b,a/b,a%b);
return 0;
}