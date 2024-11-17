// Write a program to check a given number is natural or not
#include<stdio.h>

int main() 
{
    int num;
    printf("Enter a number :");
    scanf(" %d", &num);

    if( num > 0) {
        printf("%d is natural number \n", num);
    }
    else {
        printf(" %d is not a natural number \n", num);
    }
    return 0;
}