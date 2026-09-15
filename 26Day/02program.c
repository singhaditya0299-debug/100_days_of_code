/*Q52: Write a program to print the following pattern:

*

*
*
*

* 
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int k=0;
    for(int i=-4;i<=4;i+=2)
    {
        k=5-abs(i);
        for(int j=1;j<=k;j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
}