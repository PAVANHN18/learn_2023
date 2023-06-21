#include <stdio.h>
#include <string.h>

void rotateLeft(char* str, int positions) {
    int length = strlen(str);

    // Adjust the number of positions to avoid unnecessary rotations
    positions = positions % length;

    // Rotate the string
    for (int i = 0; i < positions; i++) {
        char temp = str[0];
        for (int j = 0; j < length - 1; j++) {
            str[j] = str[j + 1];
        }
        str[length - 1] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    int positions = 3;

    printf("Original string: %s\n", str);

    rotateLeft(str, positions);

    printf("Rotated string (left): %s\n", str);

    return 0;
}
