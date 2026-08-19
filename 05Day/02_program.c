// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the seconds:\n");
    scanf("%d",&a);    
    b=a/60;
    c=a%60;
    d=b/60;
    e=b%60;
    printf("%d seconds contain %d hours ,%d minutes , %d seconds",a,d,e,c);
    return 0;
}