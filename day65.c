// #include <stdio.h>

int main()
 {
    char s[1000], t[1000];
    scanf("%s %s",s,t);

    int countS[26] = {0},countT[26] = {0};
    int i = 0;

    while (s[i]!='\0')
     {
        countS[s[i] - 'a']++;
        i++;
    }

    i = 0;
    while (t[i]!='\0')
     {
        countT[t[i]-'a']++;
        i++;
    }

    for (i = 0; i < 26; i++) 
    {
        if (countS[i] != countT[i]) 
        {
            printf("Not anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}