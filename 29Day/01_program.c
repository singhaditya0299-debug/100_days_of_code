#include<stdio.h>
int main(){
    int n,c=0;
    int a[n];
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        c+=a[i];
    }
    printf("The sum is %d",c);
    return 0;
}