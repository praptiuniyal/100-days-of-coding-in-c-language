// Find the sum of all elements in a matrix.

#include <stdio.h>
int main()
{
    int i,j, row, col;
    double sum=0;
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
            sum= sum+arr[i][j];
        }
    }

    printf("The sum of all the elements of the matrix is: %.2f", sum);

    return 0;
}