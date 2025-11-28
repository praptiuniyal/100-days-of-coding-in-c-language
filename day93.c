// Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i, max = 0;

    for (i = 0; i < 5; i++)
     {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    for (i = 1; i < 5; i++)
     {
        if (students[i].marks > students[max].marks)
         {
            max= i;
        }
    }
    printf("Topper :\n");
    printf("Name: %s\n", students[max].name);
    printf("Roll No: %d\n", students[max].roll_no);
    printf("Marks: %.2f", students[max].marks);

    return 0;
}