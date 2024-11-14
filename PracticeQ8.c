// Write a program to print the avarage of 3 number
#include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter three numbers a,b,c :");
    scanf(" %d%d%d", &a ,&b,&c);
    printf("Average of three numbers is : %d", (a+b+c)/3 );
    return 0;
}