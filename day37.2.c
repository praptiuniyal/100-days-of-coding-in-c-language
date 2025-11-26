// Find the transpose of a matrix.

#include <stdio.h>
int main()
{
    int i,j, row, col;
    int t=0;
    printf("Enter the number of rows you want in the matrix:");
    scanf("%d", &row);

     printf("Enter the number of columns you want in the matrix:");
    scanf("%d", &col);

    int arr[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the element:");
            scanf("%d", &arr[i][j]);
            
        }
        
    }
    
    printf("The transpose of the matrix is:\n");
for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
return 0;
}
