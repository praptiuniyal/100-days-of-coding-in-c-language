//Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main() {
    int n,t,mul,new;
    mul=1;
    printf("Enetr a number:");
    scanf("%d", &n);
    int last = n%10;
    t=n;
    while(t>=10)
{
    t=t/10;
    mul=mul*10;
}
int first=t;
int middle= (n%mul)/10;
new=last * mul + middle * 10 + first;

printf("the swapped number is:%d", new);

return 0;
}