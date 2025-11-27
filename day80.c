// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main()
 {
    FILE *f;
    int n,roll,marks;
    char name[100];

    printf("Enter number of students: ");
    scanf("%d",&n);

    f = fopen("students.txt", "w");

    for (int i = 0; i < n; i++)
     {
        printf("Enter name, roll number, marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(f, "%s %d %d\n", name, roll, marks);
    }

    fclose(f);

    f = fopen("students.txt", "r");
    printf("\nStored Records:\n");
    while (fscanf(f, "%s %d %d", name, &roll, &marks) == 3) 
    {
        printf("Name: %s, Roll: %d, Marks: %d\n", name, roll, marks);
    }

    fclose(f);
    return 0;
}