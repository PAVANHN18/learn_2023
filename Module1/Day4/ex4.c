#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int sumEven = 0;  // Sum of even elements
    int sumOdd = 0;   // Sum of odd elements

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sumEven += array[i];  // Add even element to sumEven
        } else {
            sumOdd += array[i];   // Add odd element to sumOdd
        }
    }

    int difference = sumEven - sumOdd;

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference: %d\n", difference);

    return 0;
}
