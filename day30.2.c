// Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main()
{
    int i,n,pos=0,neg=0,zero=0;
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
        if(arr[i]<0)
        {
        neg++;
    }
        else if(arr[i]>0)
        {
        pos++;
}
else
{
    zero++;
}
    }
    printf("Positive counts are: %d\n", pos);
    printf("Negative counts are: %d\n", neg);
    printf("Zero counts are: %d\n", zero);

    return 0;
}