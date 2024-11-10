// Write a program to calculate area of circle(radius is given)
//area of a circle : 3.14*r*r
#include<stdio.h>

int main() {
    float r;  // radius = r
    printf("Enter radius of the circle :");
    scanf("%f", &r);

    printf("area of the circle : %f", 3.14*r*r);  //pi = 3.14
    return 0;
}