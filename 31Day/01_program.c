 //Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main(){
    int n,a[n],o;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter a value in %d position :\n",i+1);
    scanf("%d",&a[i]);
    }
    printf("Enter a number you want to find out:\n");
    scanf("%d",&o);
    for(int i=0;i<n;i++)
    {
        if(a[i]==o){
            printf("This number is in %d position",i+1);
        }
    }
    return 0;
}