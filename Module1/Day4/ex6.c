#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    while (*str) {
        if (isupper(*str)) {
            *str = tolower(*str);  // Convert uppercase to lowercase
        } else if (islower(*str)) {
            *str = toupper(*str);  // Convert lowercase to uppercase
        }

        str++;  // Move to the next character
    }
}

int main() {
    char str[] = "Hello World";

    printf("Original string: %s\n", str);

    toggleCase(str);

    printf("Toggled case string: %s\n", str);

    return 0;
}
