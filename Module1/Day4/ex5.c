#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int sumEvenIndex = 0;  // Sum of elements at even indices
    int sumOddIndex = 0;   // Sum of elements at odd indices

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEvenIndex += array[i];  // Add element at even index to sumEvenIndex
        } else {
            sumOddIndex += array[i];   // Add element at odd index to sumOddIndex
        }
    }

    int difference = sumEvenIndex - sumOddIndex;

    printf("Sum of elements at even indices: %d\n", sumEvenIndex);
    printf("Sum of elements at odd indices: %d\n", sumOddIndex);
    printf("Difference: %d\n", difference);

    return 0;
}
