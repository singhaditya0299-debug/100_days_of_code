//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

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
        int r,v;
    printf("Enter how much rows you want to put in matrix:\n");
    scanf("%d",&r);
    printf("Enter how much column you want put in matrix:\n");
    scanf("%d",&v);
    int c[r][v];
    for(int i=0;i<r;i++){
        for(int j=0;j<v;j++){
            printf("Enter the value in %d row and %d column\n",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    int g[a][v];
    for(int i=0;i<a;i++){
        for(int j=0;j<v;j++){
            
        }
    }
    