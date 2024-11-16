 // check charater is lowwer case or upper case
 #include<stdio.h>

int main() {
    char ch ;
    printf("Enter character :");
    scanf(" %c",&ch);

    if( ch >= 'a' && ch <='z') {
        printf("lower case \n");
    }
    else if ( ch >= 'A' && ch <= 'Z') 
    {
        printf("upper case \n");
    }
    else {
        printf("Not English letter \n");
    }
    return 0;
    
}