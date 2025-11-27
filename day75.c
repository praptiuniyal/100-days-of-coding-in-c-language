// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() 
{
    FILE *f;
    char text[200];

    f = fopen("info.txt","a");
    if (f==NULL) 
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter a new line: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, f);
    fclose(f);

    printf("Text appended successfully");
    return 0;
}