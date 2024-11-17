/* Write a program to check a given number is armstrong or not
Armstrong number 153 = 1^3 + 5^3 + 3^3 = 153 then it is armstrong number
n: Input number from the user.
r: Stores the remainder during the process of extracting digits.
sum: Accumulates the sum of cubes of the digits.
temp: A copy of the original number to compare at the end.
153%10=3 (last digit of 153).
15%10=5
15%10=5 (last digit of 15).
1%10=1
1%10=1 (last digit of 1).
*/
#include<stdio.h>

int main() {
int n , r, sum = 0, temp; 
printf("Enter a number :");
scanf(" %d", &n);
temp = n;

while (n > 0)
{   
    
    r = n%10;
    sum = sum + (r*r*r);
    n = n/10;
}
if (temp == sum)
{
    printf("Armstrong number : \n");
}
else {
    printf("Not armstrong number : \n");
}
return 0;


}