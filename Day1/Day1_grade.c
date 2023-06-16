#include <stdio.h>
int main(){
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if (marks >= 90 && marks<= 100)
        printf("Grade A");
    else if (marks >= 75 && marks <= 89)
        printf("Grade B");
    else if (marks >= 60 && marks <=74)
        printf("Grade C");
    else if (marks >= 50 && marks <= 59) 
        printf("Grade D");
    else if (marks <= 49 && marks >= 0)
        printf("Fail");
    else
        printf("Enter a Valid Marks");
    return 0;
}