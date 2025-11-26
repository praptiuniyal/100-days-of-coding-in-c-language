// Find the longest word in a sentence.

#include <stdio.h>
int main()
 {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 

    int i = 0, length = 0, maxLength = 0, start = 0, maxStart = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n')
         {
           
            if (length == 0) start = i;
            length++;
        } else {
           
            if (length > maxLength) {
                maxLength = length;
                maxStart = start;
            }
            length = 0; 
        }
        i++;
    }

    if (length > maxLength) {
        maxLength = length;
        maxStart = start;
    }

    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength: %d\n", maxLength);

    return 0;
}