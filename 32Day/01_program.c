// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main(){
    int n=0,a[n],b[n];
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
    printf("Enter a value in %d position :\n",j+1);
    scanf("%d",&b[j]);
    }
    int c[2*n];
    for(int k=0;k<2*n;k++){
        if(k<n){
            c[k]=a[k];
        }
            if(k>=n&&k<2*n){
                c[k]=b[k-n];
            }
    }
    for(int l=0;l<2*n;l++){
    printf("%d\n",c[l]);
    }
    return 0;
}
