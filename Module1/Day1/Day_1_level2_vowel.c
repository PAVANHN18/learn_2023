#include <stdio.h>
int vowel_check(char C){
    char arr[] = "AaEeIiOoUu";
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if (C == arr[i]){
            return 1;
            break;
        }
      else
            return 0;
            
    }
}
int main(){
    char C;
    printf("Enter the Character to check : ");
    scanf("%c", &C);
    int value = vowel_check(C);
    if (value == 1)
        printf("Vowel");
    else
        printf("Not Vowel");
}