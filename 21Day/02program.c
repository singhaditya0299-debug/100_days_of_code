//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include<stdio.h>
int main(){
    int a,b=0,c;
    printf("Enter a number");
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        if(a%i==0){
            b=b+i;
        }
    }
    if(b==a){
        printf("Yes");}
        else {
            printf("no");
        }
    
    return 0;
}