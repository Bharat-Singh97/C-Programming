// Write a program to print prime number in range    
#include<stdio.h>
  
    int isPrime(int n) { // function defination check number is prime or not
             if (n < 2)
             {
                return 0;
             }
             for (int i = 2; i*i <= n; i++)
             {
                if (n % i ==0)
                {
                    return 0;
                }
                
             } return 1;
             
    }
    int main() {
       int start ,end;
       printf("Enter range :");
       scanf("%d %d", &start, &end);

       printf("Prime  \n");
       for (int i = start; i <= end; i++)
       {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
        
       }
          return 0;
    }   