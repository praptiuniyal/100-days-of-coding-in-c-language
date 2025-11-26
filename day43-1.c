// Reverse a string.

#include <stdio.h>
int main()
{
    int i=0,c=0,f=0;
    char str[50];
    char rev[50];
    printf("Enter the string :");
    scanf("%s", str);
    for(i=0; str[i]!='\0';i++)

    {
       c++;
    }
    for(i=c-1;i>=0;i--)
    {
        rev[f] = str[i];
        f++;
    }
    rev[f]='\0';
    printf("Reversed string: %s", rev);

    return 0;
}