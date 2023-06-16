// level 1 -> module1 -> Day1
#include <stdio.h>
int main(){
    int number1, number2;
    printf("Enter the Two Numbers");
    scanf("%d %d",&number1,&number2);
    if (number1 > number2)
       printf("greater number is : %d",number1);
    else
       printf("greater number is : %d",number2);
    return 0;
} 