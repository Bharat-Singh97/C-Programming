/*Keep taking numbers as input from user until user enters an odd number 
most loop control by user input see each step care fully do while loop*/

#include<stdio.h>

int main() { 
   int n;
   do {
       printf("Enter a number n:");
       scanf("%d", &n);
       printf("%d \n", n);
       
       if (n  % 2 !=0){ // number is odd
          break;
       }
       
   } while (1);
   
    printf("Your program is successfully Executed");
   
return 0;
}