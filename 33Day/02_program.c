//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>
int main(){
    int n=0,a[n],o;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    printf("Enter the value you want to put:\n");
    scanf("%d",&o);
    int b[n+1];
    for(int i=0;i<n;i++){
        if(a[i]<o&&a[i+1]>o){
            b[i+1]=o;
        }
        if(a[i]<o){
            b[i]=a[i];
        }
        if(a[i]>=o){
            b[i+1]=a[i];
        }
    }
        for(int i=0;i<n+1;i++){
    printf("%d\n",b[i]);
    }
    return 0;
}

    