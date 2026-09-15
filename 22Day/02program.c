//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include<stdio.h>
int main(){
    int a;
    float b=1.00,c;
    printf("Enter a number");
    scanf("%d",&a);
    a=a-1;
    for(int i=1;i<=a;i++)
    {
        b=b+(i*2+1.00)/(2*(i+1));
    }
    printf("%.2f",b);
    return 0;
}