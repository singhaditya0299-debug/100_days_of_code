//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c=0,d,e,f;
    printf("Enter a number");
    scanf("%d",&a);
    b=a;
    for(int i=1;b!=0;i++)
    {b/=10;
        c++;
    }
    d=a%10;
    e=a/(pow(10,c-1));
    f=a-d-e*pow(10,c-1);
    f=f+e+d*pow(10,c-1);
    printf("%d",f);
    return 0;

}