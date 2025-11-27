// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
int main()
 {
    FILE *f = fopen("input.txt", "r");
    if (f == NULL)
     {
        printf("Error opening file\n");
        return 1;
    }

    int ch,vow= 0, constant= 0;

    while ((ch = fgetc(f)) != EOF)
     {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
         {
            char c = ch;
            if (c >= 'A' && c <= 'Z') c = c + 32; 
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vow++;
            else
                constant++;
        }
    }

    fclose(f);

    printf("Vowels: %d\n", vow);
    printf("Consonants: %d\n", constant);

    return 0;
}