// print all the odd number from 5 to 50
#include<stdio.h>
  
  int main () {
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue; // its skip all even number if we put != then it skip all odd number
        }
        
        
        
        printf("%d \n", i);
    }
return 0;
  }