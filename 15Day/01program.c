 //Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
int main(){
int n,k=1;
printf("Enter a number:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
        k*=i;}
        printf("%d",k);
    
return 0;
}