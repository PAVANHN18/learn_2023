#include <stdio.h>

int bcdToDecimal(int bcd) {
    int decimal = 0;
    int weight = 1;

    while (bcd > 0) {
        int digit = bcd % 10;
        decimal += digit * weight;
        weight *= 10;
        bcd /= 16;
    }

    return decimal;
}

int main() {
    int bcdNumber;

    printf("Enter a BCD number: ");
    scanf("%d", &bcdNumber);

    int decimalNumber = bcdToDecimal(bcdNumber);
    printf("Decimal number: %d\n", decimalNumber);

    return 0;
}
