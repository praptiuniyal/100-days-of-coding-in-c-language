// Count even and odd numbers in an array.

#include <stdio.h>
int main()
{
    int i,n,even=0,odd=0;
    printf("Enter how many elements do you want in the one dimensional array:\n");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element\n");
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
        even++;
    }
        else
        {
        odd++;
}
    }
    printf("Even counts are: %d\n", even);
    printf("Odd counts are: %d\n", odd);

    return 0;
}