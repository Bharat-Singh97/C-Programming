// Check a student fail or pass 
#include<stdio.h>

int main() {
 int marks;
 printf("Enter the marks :");
 scanf(" %d", &marks);

 if(marks >= 0 && marks <=32) {
    printf("Fail \n");
 } else if(marks>= 33 && marks <= 100) {
    printf("Pass \n");
 }
 else {
    printf("Wrong marks \n");
 }
 return 0;
}