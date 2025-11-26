// check if the entered string is palindrome

#include <stdio.h>
int main()
{
    int i=0,c=0,f=0,flag=0;
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

 for(i=0; str[i]!='\0';i++)
 {
    if(str[i]!=rev[i])
  flag=1;
  break;
 }

 if(flag==1)
    printf("Not Palindrome");
    if(flag==0)
    printf("Palindrome");

    return 0;
}