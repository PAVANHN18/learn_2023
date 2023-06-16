#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Print the numbers in ascending order
        for (int j = 1; j <= rows - i; j++) {
            printf("%d", j);
        }

        // Print spaces
        for (int k = 0; k < 2 * i; k++) {
            printf(" ");
        }

        // Print the numbers in descending order
        for (int l = rows - i; l >= 1; l--) {
            printf("%d", l);
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
