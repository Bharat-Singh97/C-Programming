/* while loop which is run atleast one time called do while loop
 syntax of do while loop this loop first work do then check condition 
 do {
 // do something
 updation;
 } while(condition);
 Q Print the Sum of First n Natural Numbers Also print them in reverse*/
#include<stdio.h>
    int main() {
        int n;
        printf("Enter a number n:");
        scanf("%d",&n);

        int sum=0;
        for (int i = 1; i <=n; i++)
        {
            sum = sum+i; //sum+=i i work in this for loop out of this its not work
        }
            printf(" sum is %d\n", sum);

            for ( int i = n; i>=1; i--) // we declare new var i because 1st loop i doesnt work on this
            {
                printf("%d\n",i);
            }
            return 0;}
 