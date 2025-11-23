// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main()
{
    int i,n;
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
        printf("%d ", arr[i]);
        
    }
    return 0;
}