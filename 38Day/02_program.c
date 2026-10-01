//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include<stdio.h>
int main(){
    int a,d,f;
    printf("Enter how much degree you want the matrix:\n");
    scanf("%d",&a);
    int c[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("Enter the value in %d row and %d column\n",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    int e=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i!=j){
            if(c[i][j]==c[j][i]){
              e++;
                  }
        }
    }
}
    if(e==(a*a-a)){
        printf("This matrix is symmetric:\n");
    }
    else{
        printf("This matrix is not symmetric");
    }
    return 0;
}