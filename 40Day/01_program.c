//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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
    int f[d][a];
    for(int i=0;i<d;i++){
        for(int j=0;j<a;j++){
            f[i][j]=c[j][i];
        }
    }
     for(int i=0;i<d;i++){
        for(int j=0;j<a;j++){
            printf("%d\t",f[i][j]);
        }
        printf("\n");
    }
return 0;
}