// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
int main() 
{
    char src[100],dest[100];
    FILE *source, *fdest;
    int ch;

    scanf("%s", src);
    scanf("%s", dest);

    source = fopen(src, "r");
    if (source== NULL) {
        printf("Error opening source file\n");
        return 1;
    }

    fdest = fopen(dest, "w");
    if (fdest == NULL) {
        printf("Error opening destination file\n");
        fclose(source);
        return 1;
    }

    while ((ch = source == NULL ? EOF : fgetc(source))!= EOF) 
    {
        fputc(ch, fdest);
    }

    fclose(source);
    fclose(fdest);

    printf("File copied successfully");
    return 0;
}