// Check a number is divisible 2 or not or even and odd
// even-> output 1, odd->0
#include<stdio.h>

int main() {
int x;
printf("Enter a number : ");
scanf(" %d", &x);
printf(" %d", x%2==0);
return 0;
}

/* Are the following valid or not 
1. int a=8^8   valid but not give output 64 its gives 0 it is bitwise operator right is pow(8,8)
2. intx; int y =x; valid 1st statement and then 2nd assign value of y is x
3. int x,y=x; invalid because we use this at same declaration time it is not possible
4. char stars='**'; in char single value accept not accept any space or multiple its it is invalid
 */