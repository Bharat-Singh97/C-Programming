/* Search on what a "nested loop" i & print this pattern using it 
*****
*****
*****
*****
*/ 
#include<stdio.h>

  int main() {
 for (int i = 0 ; i < 4; i++) // outer loop for row
 { 
     for (int j = 0 ; j<=4 ; j++) // inner loop for column
 {  // for(int j = i ;j>=1; j-- or int j=0; j<=i; j++ for incresing order star prin or for(in j = 4; j>=i;j-- for reverse * print))
    printf("*");
 }
  printf("\n"); // move to next after printing a row
}

 return 0;
  }