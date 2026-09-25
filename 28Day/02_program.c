#include<stdio.h>
int main(){
    int n,a[n];
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",a[i]);
    }
    for(int i=0;i<n;i++){
    printf("The value in %d position is %d:\n",i+1,a[i]);
}
return 0;
}