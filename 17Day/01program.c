// Q17: Write a program to find the roots of a quadratic equation and categorize them.

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
    int a,b,c,d;
    printf("Let the quadratic equation be a*x*X+b*x+c,Enter the value of a,b,c,d\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
 d=b*b-4*a*c   ;
 if (d>0){
    printf("The roots are real and distint ie %.2f and %.2f",(0.00-(float)sqrt(d)-b)/2*a,((float)sqrt(d)-b)/2.00*a);}
    else if (d=0){
    printf("The roots are real and  equal ie %.2f",((float)sqrt(d)-b)/2*a);}

        else { printf("unreal roots");}
    
return 0;
    }