// Count vowels and consonants in a string.

#include <stdio.h>
int main()
{
    int i=0,c=0,v=0;
    char str[50];
    printf("Enter the string :");
    scanf("%s", str);
    for(i=0; str[i]!='\0';i++)

    {
        char ch= str[i];
        if(ch=='A'|| ch=='E'|| ch=='I' || ch=='O' || ch=='U'|| ch=='a'|| ch=='e'|| ch=='i' || ch=='o'|| ch=='u')            
            v++;
            else 
            c++;
    }
    printf("The number of vowels are : %d \n", v);
    printf("The number of consonants are : %d", c);

    return 0;
}