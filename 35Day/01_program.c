//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main(){
    int n=0,a[n];
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    int g=a[0];
    for(int i=0;i<n;i++){
        if(g<a[i]){
            g=a[i];
        }
    }
    int s=0;
    for(int i=0;i<n;i++){
        if(g>a[i]&&s<a[i]){
            s=a[i];
        }
    }
    printf("The second largest value is : %d",s);
    return 0;
}