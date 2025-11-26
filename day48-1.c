// Check if one string is a rotation of another.

#include <stdio.h>
int stringLength(char str[]) 
{
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}


int isRotation(char str1[], char str2[]) 
{
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);

    if (len1 != len2) return 0;

    for (int shift = 0; shift < len1; shift++) {
        int match = 1;
        for (int i = 0; i < len1; i++) {
           
            if (str1[i] != str2[(i + shift) % len1]) {
                match = 0;
                break;
            }
        }
        if (match) return 1;
    }
    return 0;
}

int main()
 {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
    printf("Yes, the strings are rotations of each other.\n");
    else
    printf("No, the strings are NOT rotations of each other.\n");

    return 0;
}