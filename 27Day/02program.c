//Q54: Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    for(int i=-6;i<=6;i+=2)
    {
        for(int k=0;k<=abs(i);k+=2)
        {
            printf(" ");
        }
        for(int j=1;j<=7-abs(i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}