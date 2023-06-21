#include <stdio.h>

void calculateSumAverage(int arr[], int size, int *sum, float *average) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += arr[i];
    }
    *average = (float)(*sum) / size;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int sum;
    float average;

    calculateSumAverage(array, size, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
