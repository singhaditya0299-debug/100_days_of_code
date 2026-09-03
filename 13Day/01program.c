#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Enter 1,2,3,4 for +,-,*,/ respectively");
    switch (c){
        case 1:
        printf("%d",a+b);
        break;
         case 2:
        printf("%d",a-b);
        break;
         case 3:
        printf("%d",a*b);
        break;
         case 4:
        printf("%d",a/b);
        break;
    }
    return 0;
    }
