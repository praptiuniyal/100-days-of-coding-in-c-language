// Count the frequency of a given character in a string

#include <stdio.h>
int main()
{
    char ch;
    int i=0,freq=0;
    char str[50];
    printf("Enter the string :\n");
fgets(str, sizeof(str), stdin);
    printf("Enter the character whose frequency you want to calculate : ");
    scanf("%c", &ch);
    for(i=0; str[i]!='\0';i++)

    {
        if(str[i]==ch)
        freq++;
    }
    printf("The frequncy of the character %c is %d", ch, freq);
    return 0;
}