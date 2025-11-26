// Read and print a matrix

#include <stdio.h>
int main()
{
    int i,j, row, col;
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
    printf("The matrix:");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d", arr[i][j]);
            
        }
        printf("\n");
    }
return 0;

}

