//Q43: Write a program to check if a number is a strong number.
/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d=1,e=0;
    printf("Enter a number");
    scanf("%d",&a);
    for(int i=1;i<=a;i*=10)
    {
        b=a/i;
        c=b%10;
        d=1;
        for(int j=1;j<=c;j++)
        {
            d*=j;
        }
        e+=d;
     }
     if(e==a){
        printf("yes");
     }
     else{
        printf("no");
     }
     return 0;
}