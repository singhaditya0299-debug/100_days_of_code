//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main(){
    int a,d;
    printf("Enter how much rows you want to put in matrix:\n");
    scanf("%d",&a);
    printf("Enter how much column you want put in matrix:\n");
    scanf("%d",&d);
    int c[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            printf("Enter the value in %d row and %d column\n",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    int s[d];
    for(int j=0;j<a;j++){
        int k=0;
        for(int i=0;i<d;i++){
            k+=c[i][j];

        }
        s[j]=k;
    }
    for(int i=0;i<d;i++){
        printf("%d\n",s[i]);
    }
    return 0;
}