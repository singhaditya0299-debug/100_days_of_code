  //Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
int main(){
    char a;
    printf("Enter the letter\n");
    scanf("%c",&a);
    int d=(int)a;
    if(d>=97&&d<=122){
        printf("This is lower case letter");
    }
        else if(d>=65&&d<=90){
            printf("This is upper case letter");
    }
    return 0;
}