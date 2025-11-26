// Remove all vowels from a string.

#include <stdio.h>
int main()
{
    int i=0,j=0,k=0;
    char str[50];
char newstr[50];
printf("Enter the string :");
fgets(str, sizeof(str), stdin);
    
    for(i=0; str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch=='A'|| ch=='E'|| ch=='I' || ch=='O' || ch=='U'|| ch=='a'|| ch=='e'|| ch=='i' || ch=='o'|| ch=='u')            
j++;
else
{
newstr[k]=str[i];
k++;
    }

    printf("The new string without vowels: %s", newstr);

    return 0;

}
}