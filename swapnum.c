#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int temp = a;  // Store the original value of a
    a = b;         // Assign b's value to a
    b = temp;      // Assign the original value of a (stored in temp) to b
    printf("%d %d", a, b);  // Print the swapped values with a space
    
    return 0;
}
