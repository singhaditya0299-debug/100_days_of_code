//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main(){
    int n=0,a[n],o;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    printf("Enter a number you want to find out:\n");
    scanf("%d",&o);
    for(int i=0;i<n;i++){
        if(a[i]==o){
            printf("The number is in %d position\n",i+1);
        }
    }
    return 0; 
}