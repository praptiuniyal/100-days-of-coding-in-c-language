// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main()
 {
    FILE *f = fopen("info.txt","r");

    if (f==NULL)
     {
        printf("Error opening file\n");
        return 1;
    }

    int ch;
    int chars = 0,words = 0,lines = 0;
    int inword = 0;

    while ((ch = fgetc(f))!= EOF) {
        chars++;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inword = 0;
        } else {
            if (inword == 0) {
                words++;
                inword = 1;
            }
        }
    }

    fclose(f);

    printf("Characters: %d\n",chars);
    printf("Words: %d\n",words);
    printf("Lines: %d",lines);

    return 0;
}