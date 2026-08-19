// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include<stdio.h>
int main(){
int a,b,c,d;
printf("Give four numbers\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
if(a>b&&a>c&&a>d){
    printf("first number is greatest");
}
else if(a<b&&b>c&&b>d){
    printf("second number is greatest");
}
else if(c>b&&a<c&&c>d){
    printf("third number is greatest");
}
else{
    printf("fourth number is greatest");
}
return 0;
}