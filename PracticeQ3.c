//Write a program to calculate perimeter of rectangle takes sides ,a & b, from the user 
//perimeter of rectangle = 2(l+b) and perimter of triangle = a+b+c
#include<stdio.h>

int main() {
    int a,b;  // a = length ,b = bredth
    printf("Enter length and bredth of the rectangle :");
    scanf("%d %d", &a , &b);

    printf("area of the rectangle is :%d", 2*(a+b));
    return 0;
}