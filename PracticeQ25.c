// Continue Statement :- skip the next iteration
// print all the number from 1 to 10 except 6 or skip 6
#include<stdio.h>
  
  int main () {
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue; //its skip 6
        }
        
        
        
        printf("%d \n", i);
    }
return 0;
  }