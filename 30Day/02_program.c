//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>
int main(){
    int n,o=0,t=0,r=0;
    int a[n];
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0){
            o++;
        }
        else if(a[i]<0){
            t++;
        }
        else{
            r++;
        }
    }
    printf("There are %d positive %d negative and %d zeroes",o,t,r);
    return 0;
}