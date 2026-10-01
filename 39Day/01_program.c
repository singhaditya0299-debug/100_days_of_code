//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include<stdio.h>
int main(){
    int a,d;
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
            if(i==j){
            if(c[0][0]==c[i][j]){
                e++;
            }
        }
    }
}
if(e==a){
    printf("The daigonal of this matrix are same");
}
else{
    printf("The daigonal of this matrix are not the same");
}
return 0;
}