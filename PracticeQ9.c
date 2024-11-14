// Write a program to check if given character is digit or not
#include<stdio.h>

int main( ) {
    int a;
    printf("Enter a character :");
    scanf(" %c", &a);
    
    printf(" It is a digit : %d" , 0<=a && a<=9); // 1 shows digits and 0 shows char
    return 0;
}