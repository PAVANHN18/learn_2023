#include <stdio.h>
#include <limits.h>

void findSmallestLargestDigits(int n, ...) {
    va_list numbers;
    va_start(numbers, n);

    int smallest_digit = INT_MAX;
    int largest_digit = INT_MIN;

    // Iterate through each number
    for (int i = 0; i < n; i++) {
        int num = va_arg(numbers, int);
        int temp = num;

        
        while (temp != 0) {
            int digit = temp % 10;
            if (digit < smallest_digit) {
                smallest_digit = digit;
            }
            if (digit > largest_digit) {
                largest_digit = digit;
            }
            temp /= 10;
        }
    }

    va_end(numbers);

    
    if (n > 0) {
        printf("Smallest Digit: %d\n", smallest_digit);
        printf("Largest Digit: %d\n", largest_digit);
    } else {
        printf("Not Valid\n");
    }
}

int main() {
    findSmallestLargestDigits(3, 8, 156, 123450);
    return 0;
}
