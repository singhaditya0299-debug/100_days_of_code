/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include<stdio.h>
void main(){
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=6-i;j++){
            printf("*");
        }
        printf("\n");
    }
}
