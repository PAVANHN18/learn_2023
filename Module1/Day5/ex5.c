#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

void swapStudents(struct Student* student1, struct Student* student2) {
    struct Student temp;

    // Swap name
    strcpy(temp.name, student1->name);
    strcpy(student1->name, student2->name);
    strcpy(student2->name, temp.name);

    // Swap age
    temp.age = student1->age;
    student1->age = student2->age;
    student2->age = temp.age;

    // Swap GPA
    temp.gpa = student1->gpa;
    student1->gpa = student2->gpa;
    student2->gpa = temp.gpa;
}

int main() {
    struct Student student1, student2;

    // Input details for student1
    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("GPA: ");
    scanf("%f", &student1.gpa);
    printf("\n");

    // Input details for student2
    printf("Enter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("GPA: ");
    scanf("%f", &student2.gpa);
    printf("\n");

    // Print original details
    printf("Original details:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("\n");
    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("GPA: %.2f\n", student2.gpa);
    printf("\n");

    // Swap details
    swapStudents(&student1, &student2);

    // Print swapped details
    printf("Swapped details:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("\n");
    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("GPA: %.2f\n", student2.gpa);
    printf("\n");

    return 0;
}
