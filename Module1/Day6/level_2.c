//function to add a member at the end of the above array of structures
struct Student* addStudent(struct Student* students, int* numStudents, int rollno, const char* name, float marks) {
    (*numStudents)++;
    students = (struct Student*)realloc(students, (*numStudents) * sizeof(struct Student));
    students[*numStudents - 1].rollno = rollno;
    strcpy(students[*numStudents - 1].name, name);
    students[*numStudents - 1].marks = marks;
    return students;
}
//function to delete a member at the start of the above array of structures
struct Student* deleteStudent(struct Student* students, int* numStudents) {
    if (*numStudents > 0) {
        for (int i = 0; i < *numStudents - 1; i++) {
            students[i] = students[i + 1];
        }
        (*numStudents)--;
        students = (struct Student*)realloc(students, (*numStudents) * sizeof(struct Student));
    }
    return students;
}
//function to swap 2 members in different indexes (based on user input) in the above array of structures
void swapStudents(struct Student* students, int index1, int index2) {
    struct Student temp = students[index1];
    students[index1] = students[index2];
    students[index2] = temp;
}
// function to rotate the above array of structures by K positions
void rotateStudents(struct Student* students, int numStudents, int k) {
    k = k % numStudents;  // Adjusting for larger rotation values
    if (k < 0) {
        k = numStudents + k;  // Adjusting for negative rotation values
    }
    struct Student* temp = (struct Student*)malloc(k * sizeof(struct Student));
    memcpy(temp, students, k * sizeof(struct Student));
    memmove(students, students + k, (numStudents - k) * sizeof(struct Student));
    memcpy(students + numStudents - k, temp, k * sizeof(struct Student));
    free(temp);
}
int main() {
    int numStudents = 3;
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));
    students = addStudent(students, &numStudents, 1004, "David", 85.5);

    // Delete a student at the start
    students = deleteStudent(students, &numStudents);

    // Swap two students based on user input
    int index1, index2;
    printf("Enter indexes to swap (0-%d): ", numStudents - 1);
    scanf("%d %d", &index1, &index2);
    if (index1 >= 0 && index1 < numStudents && index2 >= 0 && index2 < numStudents) {
        swapStudents(students, index1, index2);
        printf("Students swapped successfully.\n");
    } else {
        printf("Invalid indexes.\n");
    }

    int k;
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    rotateStudents(students, numStudents, k);

    // Display the modified students
    displayStudents(students, numStudents);

    // Clean up memory
    free(students);

   
