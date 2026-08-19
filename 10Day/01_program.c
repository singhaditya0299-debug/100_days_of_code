// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main(){
    int a,b,c;
        printf("Enter the length of side 1\n");
    scanf("%f",&a);
        printf("Enter the length of side 2\n");
    scanf("%f",&b);
        printf("Enter the length of side 3\n");
    scanf("%f",&c);
    if(a==b==c){
        printf("The triangle is equalateral");
    }
    else if(a!=b&&a!=c&&b!=c){
        printf("The triangle is scalene");
    }
    else{
        printf("The triangle is isoceles");
    }
    return 0;
}