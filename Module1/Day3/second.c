#include <stdio.h>

void printBits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31; // Start with the leftmost bit

    for (i = 0; i < 32; i++) {
        // Check if the current bit is set or not
        if ((num & mask) != 0) {
            printf("1");
        } else {
            printf("0");
        }

        // Shift the mask to the right by 1 bit
        mask >>= 1;
    }

    printf("\n");
}

int main() {
    unsigned int number;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &number);

    printf("Bits representation: ");
    printBits(number);

    return 0;
}
