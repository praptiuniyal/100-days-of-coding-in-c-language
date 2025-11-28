// Take two structs as input and check if they are identical.

#include <stdio.h>
struct Student
 {
    char name[50];
    int roll_no;
    float marks;
};

int compareStudents(struct Student s1, struct Student s2)
 {
    int i = 0;
    while (s1.name[i] != '\0' || s2.name[i] != '\0') {
        if (s1.name[i] != s2.name[i]) return 0;
        i++;
    }
    if (s1.roll_no != s2.roll_no) return 0;
    if (s1.marks != s2.marks) return 0;
    return 1;
}
int main() 
{
    struct Student s1, s2;

    scanf("%s", s1.name);
    scanf("%d", &s1.roll_no);
    scanf("%f", &s1.marks);

    scanf("%s", s2.name);
    scanf("%d", &s2.roll_no);
    scanf("%f", &s2.marks);

    if (compareStudents(s1, s2))
        printf("Both students are identical\n");
    else
        printf("Students are different");

    return 0;
}