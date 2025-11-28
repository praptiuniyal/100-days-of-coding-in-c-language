// Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
struct Student 
{
    char name[30];
    int roll_no;
    float marks;
};
int main()
 {
    struct Student s;
    struct Student *ptr;
    ptr = &s;

    scanf("%s", ptr->name);
    scanf("%d", &ptr->roll_no);
    scanf("%f", &ptr->marks);

    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f", ptr->marks);

    return 0;
}