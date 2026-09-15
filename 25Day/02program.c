/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include<stdio.h>
void main(){
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=5;k++){
            if(k>=6-i){
                printf("%d",k);
            }
        }
        printf("\n");
    }
}
