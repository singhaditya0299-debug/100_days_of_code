// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include<stdio.h>
int main(){
    char a;
    printf("Enter a character:\n");
    scanf("%c",&a);
    int b=(int)a;
    if(b==97||b==101||b==105||b==111||b==117){
        printf("The letter is a vowel");
    }
    else{
        printf("The letter is consonent");
    }
    return 0;
}