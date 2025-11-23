// Search for an element in an array using linear search.

#include <stdio.h>
int main()
{
    int i,n,num;
    int flag=0;
    printf("Enter how many elements do you want in the one dimensional array:\n");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element\n");
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search for: \n");
    scanf("%d", &num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
        printf("Found at %d position", i+1);
        flag=1;
        break;
    }
    }
if(flag==0)
    printf("Not found");

    return 0;
    

}