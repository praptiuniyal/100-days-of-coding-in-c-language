// Add two matrices.

#include <stdio.h>
int main()
{
    int i,j,row,col;
    
    printf("Enter the number of rows you want in the matrix:");
    scanf("%d", &row);

     printf("Enter the number of columns you want in the matrix:");
    scanf("%d", &col);

    int a[row][col];

    printf("Enter elements for the matrix 'a'\n");

    for(i=0;i<row;i++)
    {
       
        for(j=0;j<col;j++)
        {
            printf("Enter the element:");
            scanf("%d", &a[i][j]);
           
        }
        
    }

     
    int b[row][col];
    int sum[row][col];
 printf("Enter elements for the matrix 'b'\n");
    
for(i=0;i<row;i++)
    {
       
        for(j=0;j<col;j++)
        {
            printf("Enter the element:");
            scanf("%d", &b[i][j]);
           
        }
        
    }
    for(i=0;i<row;i++)
    {
       
        for(j=0;j<col;j++)
        {
            sum[i][j]= a[i][j] + b[i][j];
           
        }
        
    }
    printf("The addition of the two matrices is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}