// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
struct Student
 {
    char name[60];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) 
{
    printf("Name: %s\n",s.name);
    printf("Roll No: %d\n",s.roll_no);
    printf("Marks: %.2f\n",s.marks);
}

int main()
 {
    struct Student s1;
    scanf("%s", s1.name);
    scanf("%d", &s1.roll_no);
    scanf("%f", &s1.marks);
    printStudent(s1);
    return 0;
}