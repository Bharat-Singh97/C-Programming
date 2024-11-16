// Write a program to give grades to a student
#include<stdio.h>

int main() {
    int marks;
    printf("Enter marks :");
    scanf(" %d", &marks);

    if(marks <= 32) {
        printf("Fail \n");
    }
    else if (32 < marks && marks <=45) 
    {
        printf("Grade C \n");
    }
    else if (45 < marks && marks < 60)
    {
        printf("Grade B \n");
    }
    else if (60 <= marks && marks <=100)
    {
        printf("Grade A \n");
    }
    else {
        printf("Invalid marks \n");
    }
    return 0;
    
    
}