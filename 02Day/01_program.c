// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the value of length:\n");
    scanf("%d",&l);
    printf("Enter the value of breadth:\n");
    scanf("%d",&b);
    printf("The area and perimeter of the ractangle are %d and %d",2*(l+b),l*b);
    return 0;
}