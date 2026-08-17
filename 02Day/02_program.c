// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
int main(){
    float r;
    printf("The radius of the circle is:\n");
    scanf("%f",&r);
    printf("The area and circumference of the circle are %0.2f and %0.2f",3.14*r*r,3.14*2*r);
    return 0;
}