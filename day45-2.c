// Toggle case of each character in a string.

#include <stdio.h>
int main()
{
    char ch;
    int i=0;
    char str[50];
printf("Enter the string :");
fgets(str, sizeof(str), stdin);
    
    for(i=0; str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch>='A'&&ch<='Z')
        {
        ch=(char)(ch+32);
        str[i]=ch;
        }
        else if(ch>='a'&&ch<='z')
        {
        ch=(char)(ch-32);
        str[i]=ch;
    }
    }
    printf("The new string is %s", str);
    return 0;
}