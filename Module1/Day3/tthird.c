#include <stdio.h>

int find_largest_num(int number) {
    char num_str[5]; //
    sprintf(num_str, "%d", number); // Convert the number to a string

    int largest_num = -1; 

  
    for (int i = 0; num_str[i] != '\0'; i++) {
      
        int new_num = 0;
        int power = 1;
        for (int j = 0; num_str[j] != '\0'; j++) {
            if (j != i) {
                new_num += (num_str[j] - '0') * power;
                power *= 10;
            }
        }

        if (new_num > largest_num) {
            largest_num = new_num;
        }
    }

    return largest_num;
}

int main() {
    int input_number = 5678;
    int largest_number = find_largest_num(input_number);
    printf("Input Number: %d\n", input_number);
    printf("Largest Number by deleting a single digit: %d\n", largest_number);

    return 0;
}
