// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main()
{
    int num,c=0,maxdigit,i;
    int freq[10]={0};
    printf("Enter the number with digits: ");
    scanf("%d", &num);
    while(num>0)
    {
        int r=num%10; //extracting a digit
        c++;
        freq[r]++;
        num = num/10;
    }
    int maxfreq=freq[0];

    for(i=0;i<10;i++)
    {
        if(freq[i]>maxfreq)
        {
            maxfreq= freq[i];
            maxdigit=i;
        }
    }
printf("Digit that occurs the most: %d\n", maxdigit);
    printf("It appears %d times.\n", maxfreq);

    return 0;

}