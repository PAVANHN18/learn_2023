#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void readComplex(struct Complex* num) {
    printf("Enter real part: ");
    scanf("%f", &(num->real));
    printf("Enter imaginary part: ");
    scanf("%f", &(num->imaginary));
}

void writeComplex(struct Complex num) {
    if (num.imaginary < 0)
        printf("Complex number: %.2f - %.2fi\n", num.real, -num.imaginary);
    else
        printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    result.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter complex number 1:\n");
    readComplex(&num1);

    printf("\nEnter complex number 2:\n");
    readComplex(&num2);

    printf("\nComplex number 1:\n");
    writeComplex(num1);

    printf("\nComplex number 2:\n");
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("\nProduct of the complex numbers:\n");
    writeComplex(product);

    return 0;
}
