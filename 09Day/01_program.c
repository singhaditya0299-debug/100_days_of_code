//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main(){
    float A,B,C,r1,r2,d=0;
    printf("Let the quadratic equation be (A)x*x + (B)x +(c)\n");
    printf("Enter the values of A respectively\n");
    scanf("%f",&A);
    printf("Enter the values of B respectively\n");
    scanf("%f",&B);
    printf("Enter the values of C respectively\n");
    scanf("%f",&C);
    d=(B*B -4*A*C);
    r1=(sqrt(d)-B)/2.00*A;
    r2=(0-sqrt(d)-B)/2.00*A;
    if(d==0){
        printf("The quadratic equation have real equal roots\nAnd the root is %0.2f",r1);
    }
    else if(d>0){
        printf("The quadratic equation have real distinct roots\nAnd tha roots are %0.2f and %0.2f",r1,r2);
    }
    else{
        printf("The quadratic equation have unreal roots");
    }
    return 0;

}