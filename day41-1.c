// Count characters in a string without using built-in length functions

#include <stdio.h>
int main()
{
    int i=0,c=0;
    char str[50];
    printf("Enter the string :");
    scanf("%s", str);
    for(i=0; str[i]!='\0';i++)

    {
        
        c++;
    }
    printf("the number of characters in the string are: %d", c);

    return 0;
}