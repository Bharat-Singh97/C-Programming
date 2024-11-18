/* print natural, whole number or one statement at multiple time
Print the Numbers from 0 to 10 
itsalso print hello world  which time you want to print you write in printf hello world
for reverrse counting we use i=10; i>=1;i-- or i-1 nad i++ or i+1 its print reverse one 10 to 1
 
  decrement --i or ++i(pre increment increse then use i =1 then print i output is 2,2)
 decrement i-- or i++(posr increment use then increment output first incre or decre then i print 1 ,2)   */
#include<stdio.h>
 
 int main() {
    // i is called iterator : counter 
    for (int i = 0; i <= 10; i++) // for int
    {
        printf("%d \n", i); 
    
    }
for (float i = 0.0; i <= 5.0; i++) // for float
{
    printf("%f \n",i);
}
for (char ch = 'a'; ch <= 'z'; ch++) // for char
{
    printf("%c \n", ch);
}

    return 0;
    
 }