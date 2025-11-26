// Print initials of a name with the surname displayed in full.

#include <stdio.h>
int main() 
{
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  

    int i = 0, start = 0;

    printf("Result: ");

    while (name[i] != '\0') {
        if (name[i] == ' ' || name[i] == '\n') {
           
            if (name[start] != ' ' && name[start] != '\n') {
                printf("%c", name[start]);
            }
            start = i + 1;  
        }
        i++;
    }
    for (int j = start; name[j] != '\0' && name[j] != '\n'; j++) {
        printf("%c", name[j]);
    }

    printf("\n");
    return 0;
}