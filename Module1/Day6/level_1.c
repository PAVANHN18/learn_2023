#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* inputString, struct Student* students, int numStudents) {
    const char* delimiter = " ";
    char* token = strtok((char*)inputString, delimiter);
    int i = 0;

    while (token != NULL && i < numStudents) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, delimiter);
        strcpy(students[i].name, token);
        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
        i++;
    }
}
//initialize
void initializeStudents(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

//display
void displayStudents(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}
// sort on marks
void sortStudentsByMarks(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// search by name
void searchStudentByName(const struct Student* students, int numStudents, const char* name) {
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}

int main() {
    const int numStudents = 3;
    struct Student students[numStudents];

    // Initialize all members
    initializeStudents(students, numStudents);

    // Set values for each student
    students[0].rollno = 1001;
    strcpy(students[0].name, "Aron");
    students[0].marks = 100.0;

    students[1].rollno = 1002;
    strcpy(students[1].name, "Bob");
    students[1].marks = 90.5;

    students[2].rollno = 1003;
    strcpy(students[2].name, "Charlie");
    students[2].marks = 95.5;

    // Display all students
    displayStudents(students, numStudents);

    // Sort students by marks
    sortStudentsByMarks(students, numStudents);

    // Display sorted students
    printf("Students sorted by marks in descending order:\n");
    displayStudents(students, numStudents);
        const char* searchName = "Bob";
    searchStudentByName(students, numStudents, searchName);

    return 0;
}
    
