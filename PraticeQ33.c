#include<stdio.h>
 //declaration/prototype step 1 
 void printHello();
 
 int main(){
   printHello(); // function call step 3 
    return 0;
 }
 
 // function definition step 2
 void printHello() {
    printf("Hello \n");
    printf("I am Bharat");
 }