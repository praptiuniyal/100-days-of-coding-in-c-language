// replace spaces with hyphen

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
        str[i]= '-';
    }

   printf("%s", str);

    return 0;
}