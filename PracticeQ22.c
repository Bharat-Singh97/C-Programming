// print the table of a number
#include<stdio.h>
 int main() {
    int n;
    printf("Enter a number n:");
    scanf("%d", &n);
    
     
     for(int i = 1; i <= 10; i++) 
     { 
      printf(" %d \n", n*i);
     }
    return 0;
 }