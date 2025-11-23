// Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int n,i,f;
    int sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
int t=n;
while(t>0)
{
    int r=t%10;
    f=1;
    for (i=1;i<=r;i++)
    {
      f=f*i;
    }
    sum=sum+f;
    t=t/10;
}

if(sum==n)
printf("Strong number");
else
printf("Not a strong number");

return 0;

}
