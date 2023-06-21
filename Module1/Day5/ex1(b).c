#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateBoxProperties(struct Box* box) {
    float volume, surfaceArea;

    // Calculate volume
    volume = box->length * box->width * box->height;

    // Calculate total surface area
    surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("Volume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surfaceArea);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr;

    // Assign values to the box dimensions
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 4.0;

    // Assign the address of myBox to boxPtr
    boxPtr = &myBox;

    // Calculate box properties using the arrow operator (->) with pointer representation
    calculateBoxProperties(boxPtr);

    // Calculate box properties using the dot operator (.) with dot representation
    calculateBoxProperties(&myBox);

    return 0;
}
