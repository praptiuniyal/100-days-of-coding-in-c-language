// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main()
{
    int n;
    int i=1;
    double sum=0;
    printf("Enter the value of 'n' till where you want to find the sum:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        double term = (2 * i - 1) / (double)(2 * i);
        sum= sum+term;
    }
printf("The sum upto n terms is %.4f", sum);
return 0;
}