//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
int main(){
    int n=0,a[n],f;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    printf("Enter how much you want to shift:");
    scanf("%d",&f);
    int b[n];
    for(int i=0;i<n;i++){
        if(i<f){
            b[i]=a[f+i];
        }
            if(i>=f&&i<n){
                b[i]=a[i-f];
            }
        }
         for(int i=0;i<n;i++){
            printf("%d\n",b[i]);

         }
    return 0;
}