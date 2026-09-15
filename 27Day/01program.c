//Q53: Write a program to print the following pattern:
/**
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    for(int i=-8;i<=8;i+=2)
    {
        for(int j=1;j<=9-abs(i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}