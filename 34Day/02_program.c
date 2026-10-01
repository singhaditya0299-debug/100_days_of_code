//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include<stdio.h>
int main(){
    int n=0,a[n],g;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    printf("Enter the position you want to delete:\n");
    scanf("%d",&g);
    int b[n-1];
    for(int i=0;i<n;i++){
        if(i<g-1){
            b[i]=a[i];
        }
        if(i>g-1){
            b[i-1]=a[i];
        }
    }
        for(int i=0;i<n-1;i++){
    printf("%d\n",b[i]);
    }
    return 0;
}
