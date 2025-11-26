// Merge two arrays.

#include <stdio.h>
int main()
{
    int i,n1,n2;
    printf("Enter how many elements do you want in array 'a':\n");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter how many elements do you want in array 'b':\n");
    scanf("%d", &n2);
    int b[n2];
    int c[n1+n2]; 
    
    for(i=0;i<n1;i++)
    {
        printf("Enter the %d element for array a\n", i+1);
        scanf("%d", &a[i]);
    }
     
    
    for(i=0;i<n2;i++)
    {
        printf("Enter the %d element for array b\n", i+1);
        scanf("%d", &b[i]);
    }
int j=0;
    for(i=0;i<n1;i++)
    {
          c[j]= a[i];
          j++;
    }
    for(i=0;i<n2;i++)
    {
        c[j] = b[i];
        j++;
    }
    printf("Merged array:\n");
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d ", c[i]);
        
    }

    return 0;
}


