// Write a program to check if a number is prime or not 
#include<stdio.h>
  
  int main() {
    int n, isPrime = 1; // Assume the nmber is prime initially
    printf("Enter a number :");
    scanf("%d",&n);

    if (n < 2)
    {
        printf("Not prime");
    }else {
        for(int i = 2; i*i<=n; i++) { //Optimization: Check divisors up to sqrt(n) its work fast as check to only squareroot as compare to i<n its check all posibility
        if (n%i==0)
        {
           isPrime = 0;// mark as not prime
           break; // Exit the loop
        }
        
    }
    if (isPrime)
    {
        printf("Prime \n");
    } else {
        printf("Not prime \n");
    }
    }
    
    return 0;
  }