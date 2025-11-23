// Write a program to check if a number is a perfect number.

#include <stdio.h>

int main()
{
    int n,i;
    int sum=0;
    printf("Enetr a number:");
    scanf("%d", &n);

for(i=1;i<n;i++)
{
if(n%i==0)
sum = sum + i;
}
if(sum==n)
printf("Perfect number");
else 
printf("Not a perfect number");
return 0;

}