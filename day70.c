// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main() {
    FILE *inFile,*outFile;
    char s[100];
    int i = 0;
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    fgets(s, sizeof(s), inFile);
    fclose(inFile);

    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] = s[0] - 'a' + 'A';
    }

    for (i = 1; s[i] != '\0'; i++)
     {
        if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    fputs(s, outFile);
    fclose(outFile);

    printf("Sentence case conversion done. Check output.txt\n");
    return 0;
}