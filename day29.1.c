// Find the sum of array elements.

#include <stdio.h>

int main()
{
    int i,n;
    double sum=0.0;
    printf("Enter how many elements do you want in the one dimensional array:\n");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element\n");
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("The summof array elements is: %f ", sum);
    return 0;
}