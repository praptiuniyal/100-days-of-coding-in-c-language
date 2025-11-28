// Return a structure containing top student's details from a function.

#include <stdio.h>
struct Student
 {
    char name[50];
    int roll_no;
    float marks;
};

struct Student topstudent(struct Student students[], int n) {
    int max= 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[max].marks) {
            max= i;
        }
    }
    return students[max];
}

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_no);
        scanf("%f", &students[i].marks);
    }

    struct Student topper =topstudent(students, 3);

    printf("\nTop Student:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}