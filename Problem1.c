// ternary operator // its convert multiple into single line
#include<stdio.h> // usedfor simple condition

int main () {
    int age;
    printf("Enter age :");
    scanf(" %d", &age);
    age >= 18 ? printf("adult \n") : printf("not adult \n"); // : means if then semicolon nahi lagaya kyoki vaha hum statement end nahi karna chahte the
    return 0;
    }