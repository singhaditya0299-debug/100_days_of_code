// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
int main(){
    float a,b,c,d,e=0;
    printf("Enter the value:\n");
    scanf("%f",&a);
    printf("For how many years:\n");
    scanf("%f",&b);
    printf("Enter the interest:\n");
    scanf("%f",&c);
    printf("The simple interest is %0.2f\n",a*b*c/100);
    for(int i=1;i<=b;i++){
        d=a*c/100.00;
        e=e+d;
        a=a+d;
    }
    printf("The compound value and compound interest are %0.2f and %0.2f respectively",a,e);
    return 0;
}