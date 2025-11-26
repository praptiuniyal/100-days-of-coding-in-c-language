// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
int main()
{
    int i=0;
    int flag=0;
    char str[50];
    char mainchar;

printf("Enter the string :");
fgets(str, sizeof(str), stdin);
    
    for(i=0; str[i]!='\0';i++)
    {
        if (str[i] == '\n') 
        continue;
        
        for(int j=i+1;str[j]!='\0';j++)
        {
            if (str[j] == '\n') 
        {
            continue;
        }
            char ch=str[i];
            char ch1=str[j];
            if(ch1==ch)
            {
                mainchar=ch1;
            flag=1;
            break;
        }
   }
   if(flag==1)
   break;
}

    if(flag==1)
    printf("The first repeating character is: %c\n", mainchar);
    else if(flag==0)
    printf("No repeating character in the string");

    return 0;
}