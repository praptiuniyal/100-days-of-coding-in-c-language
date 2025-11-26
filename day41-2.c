// print each character of a string in a new line

#include <stdio.h>
int main()
{
    int i=0,c=0;
    char str[50];
    printf("Enter the string :");
    scanf("%s", str);
    for(i=0; str[i]!='\0';i++)

    {
        printf("%c\n", str[i]);
        printf("\n");
    }
    

    return 0;
}