// Write a program to print smallest number of two
#include<stdio.h>

int main () {
    int a , b;
    printf("Enter a number a ,b :");
    scanf(" %d%d", &a , &b);
    
    if(a<b) {
         printf(" a is smallest number :%d", a);
    }
    else {
         printf("b is smallest : %d", b);
    }
    return 0;
}
