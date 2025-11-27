// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>

int main() 
{
    FILE *in, *out;
    int ch;

    in = fopen("input.txt","r");
    if (in == NULL)
     {
        printf("Error opening input file\n");
        return 1;
    }

    out = fopen("output.txt","w");
    if (out == NULL)
     {
        printf("Error opening output file\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) 
    {
        if (ch >= 'a' && ch <= 'z') 
        {
            ch = ch - 'a' + 'A';
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);
    printf("Conversion done. Check output.txt\n");
    return 0;
}