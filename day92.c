// Store details of 5 students in an array of structures and print all.

#include <stdio.h>
struct Student
 {
    char name[60];
    int roll_no;
    float marks;
};

int main()
 {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++)
     {
        printf("Enter name of student %d: ",i+1);
        scanf("%s",students[i].name);

        printf("Enter roll number of student %d: ",i+1);
        scanf("%d",&students[i].roll_no);

        printf("Enter marks of student %d: ",i+1);
        scanf("%f",&students[i].marks);
    

    printf("Student Details :\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n",
               students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}