 /* will this code :
 a. give error
 b. print x is equal to 1
 c. print x is not equal to 1
 */
 #include<stdio.h>

  int main() {
    int x = 2; // if we want to check x =2 then we wrile x==1 in if section we write x=1 so its replace already write x=2 to x=1 in memory location so its give output x is equal to 1

    if(x=4) { // its give output ifwrite x= 2,3,45 etc outpu is x is equal to 1 because its work on 0 is false and other 1,2,3 etx is true
        printf("x is equal to 1 \n"); // its check condition
        printf(" %d \n", x ); // its print actual value

    }
    else {
        printf("x is not equal to 1");
    }
    return 0;
  }