//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
int main(){
    int n=0,a[n],b=0,d=0,f=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int c=0;
        c=a[i];
        b=0;
        for(int j=0;j<n;j++){
            if(a[j]==c){
                b++;
        }}
        if(b>d){
            d=b;
            f=a[i];
        }

    }
    printf("The maximum occuring element is %d",f);
    return 0;
 }