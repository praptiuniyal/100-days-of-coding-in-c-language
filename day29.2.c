// Find the maximum and minimum element in an array.

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
    }
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++)
    {
if(arr[i]>max)
{
max =arr[i];
    }
if(arr[i]<min)
{
min=arr[i];
    }
   }

   printf("The maximum element in the array is %d ",max);
   printf("The minimum element in the array is %d ",min);
    return 0;
}