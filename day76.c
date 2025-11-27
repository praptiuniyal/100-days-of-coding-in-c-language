// Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>
int main() 
{
    char filename[100];
    FILE *f;
    char line[256];

    printf("Enter filename: ");
    scanf("%s", filename);

    f = fopen(filename,"r");
    if (f == NULL) {
        printf("Error: File not found\n");
        return 1;
    }

    while (fgets(line, sizeof(line), f))
     {
        printf("%s", line);
    }
    fclose(f);
    return 0;
}