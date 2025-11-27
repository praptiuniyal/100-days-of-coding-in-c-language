// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>

int main()
 {
    char s[1000];
    scanf("%s", s);

    int n = 0;
    while (s[n]!='\0')
     {
        n++;
    }

    int lastIndex[256];
    for (int i = 0; i < 256; i++) 
{
    lastIndex[i] = -1;
}

    int maxLen = 0, start = 0;

    for (int i= 0; i< n; i++) {
        int idx= (int)s[i];   
        if (idx<0) idx += 256; 

        if (lastIndex[idx] >= start) {
            start = lastIndex[idx] + 1;
        }
        lastIndex[idx] = i;

        int currLen = i - start + 1;
        if (currLen > maxLen) maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}