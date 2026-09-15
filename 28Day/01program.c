// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for(int i=1;i<+a;i++)
    {
        c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
                printf("%d\n",i);
            }
    }
    return 0;
}