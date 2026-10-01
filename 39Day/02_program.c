//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include<stdio.h>
int main(){
    int a,d,f;
    printf("Enter how much rows you want to put in matrix:\n");
    scanf("%d",&a);
    printf("Enter how much column you want put in matrix:\n");
    scanf("%d",&d);
    if(a=d){
    int c[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            printf("Enter the value in %d row and %d column\n",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
           if(i==j){
            sum+=c[i][j];
           }
    }
}
printf("The value of transpose is %d",sum);
    }
    else{
        printf("not possible");
    }
return 0; 
}
