// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
int main() 
{
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 

    int i = 0, start = 0;

    while (str[i] != '\0')
     {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            int end = i - 1;
            while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
            }

        
            start = i + 1;
        }
        i++;
    }

    printf("Sentence after reversing each word:\n%s", str);

    return 0;
}