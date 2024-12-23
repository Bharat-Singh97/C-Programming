// print the factorial of number n initial fac = 1 because when mul something gives ohter we took then get 0 after mul
#include<stdio.h>

 int main () { 
    int n;
    printf("Enter a Number n:");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        
        fact = fact * i ;
        
    }
    printf("Final Factorial is : %d", fact);

        return 0;

    }
    

 // its work for small number factorial in int 