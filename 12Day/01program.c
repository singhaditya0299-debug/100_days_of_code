//Q23: Write a program to calculate library fine based on late days as follows: 
/*First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter for how many days you are late to return a book to library:\n");
    scanf("%d",&a);
    if (a<=5){
        printf("You have to pay %d as a fine",a*2);}

        else if(a>5&&a<=10){
            printf("You have to pay %d as a fine",2*5+(a-5)*4);
        }
        else if(a>10&&a<=30){
            printf("You have to pay %d as a fine",2*5+4*5+(a-10)*6);
        }
        else{
            printf("Your subscription ia cancelled");
        }
        return 0;
    }
