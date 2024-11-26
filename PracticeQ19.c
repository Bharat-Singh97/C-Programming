/* Print the numbers from 0 to n , if n is given by user
for loop (initialization ; condition; updation)
{print}
while loop 
initialization
while(condition){
print; updation}
*/
#include<stdio.h> 
    int main() {
          int n;
        printf("Enter a number  n :");
        scanf("%d", &n);
        int i=0;
        while(i<=n)
        {
            printf("%d \n", i);
            i++;
        }
        
        return 0;
}