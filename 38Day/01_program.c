//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include<stdio.h>
int main(){
    int a,d,f;
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
    int l[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            printf("Enter the value in %d row and %d column\n",i+1,j+1);
            scanf("%d",&l[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            l[i][j]+=c[i][j];
        }
    }
     for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            printf("%d\t",l[i][j]);
        }
        printf("\n");
    }
    return 0;
}