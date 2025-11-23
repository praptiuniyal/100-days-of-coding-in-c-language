// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main()
{
    int n,i,a,t;
    double sum=0.0;
    printf("Enter the value of 'n' till where you want to find the sum:\n");
    scanf("%d", &n);
    a=3;
    t=2;
    for(i=1;i<=n;i++)
    {
        double term = (double)t/a;
        sum= sum+term;
        a=a+4;
        t=t+2;
    }
printf("The sum upto n terms is %.4f", sum);
return 0;
}

