// Count spaces, digits, and special characters in a string.

#include <stdio.h>
int main()
{
    int i=0,s=0,d=0,sp=0;
    char str[50];
    printf("Enter the string :");
fgets(str, sizeof(str), stdin);
    
    for(i=0; str[i]!='\0';i++)
    {
        char ch= str[i];
        if(ch==' ')
        s++;
        else if(ch>='0' && ch<='9')
        d++;
        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
        {
        }
        else if(ch!='\n')
        sp++;
    }

    printf("The number of spaces are : %d \n", s);
    printf("The number of digits are : %d \n", d);
printf("The number of special characters  are : %d \n", sp);

    return 0;
}