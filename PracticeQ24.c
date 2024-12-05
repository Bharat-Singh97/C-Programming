// Keep taking numbers as input from user until user enters a numbers which is multiole if 7
// break statement use when we want to exit the loop , break statement exit us from nested loop so use carefully
#include<stdio.h> 

  int main() {
    int n;
    do {
        printf("ENter a number n: ");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 7 == 0) {// multiple of 7
            break;
        }
        
 
    } while (1);
    printf("Thank You");
    return 0;
    
  }