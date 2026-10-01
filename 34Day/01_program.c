//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main(){
    int n=0,a[n],o,g;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    printf("Enter the value you want to put:\n");
    scanf("%d",&o);
    printf("Enter the position you want to put this number:\n");
    scanf("%d",&g);
    int b[n+1];
    for(int i=0;i<n+1;i++){
        if(i==g-1){
            b[i]=o;
        }
        if(i<g-1){
            b[i]=a[i];
        }
        if(i>g-1){
            b[i]=a[i-1];
        }
    }
        for(int i=0;i<n+1;i++){
    printf("%d\n",b[i]);
    }
    return 0;
}
