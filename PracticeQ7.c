// check two digits numbers greater than 9  and less than 100
#include<stdio.h>

int main() {
    int x;
    printf("Entera number :");
    scanf(" %d",&x);
    printf(" %d", x>9 && x<100);
    return 0;
}
/*
ex 1. int isBharat = 1; or 0
int in 3rd year = 1; or 0; 
printf("%d", isBharat && in 3rd year); when both its output 1 when any one is 0 its output is 0
printf("%d", is Bharat || in 3rd year); when anyone is one its output is 1 
*/