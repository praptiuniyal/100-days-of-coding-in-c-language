// Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>
struct Date
 {
    int day;
    int month;
    int year;
};

struct Employee
 {
    char name[30];
    int id;
    struct Date joining_date;
};

int main()
 {
    struct Employee e;

    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%d %d %d", &e.joining_date.day, &e.joining_date.month, &e.joining_date.year);

    printf("Employee Details:");
    printf("Name: %s\n",e.name);
    printf("ID: %d\n",e.id);
    printf("Joining Date: %02d-%02d-%04d\n", e.joining_date.day, e.joining_date.month, e.joining_date.year);

    return 0;
}