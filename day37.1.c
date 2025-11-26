// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main()
{
    int i,j, row, col;
    double sum=0;
    int t=0;
    double s[t];
    printf("Enter the number of rows you want in the matrix:");
    scanf("%d", &row);

     printf("Enter the number of columns you want in the matrix:");
    scanf("%d", &col);

    int arr[row][col];

    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        {
            printf("Enter the element:");
            scanf("%d", &arr[i][j]);
            sum= sum+ arr[i][j];
        }
        s[t]= sum;
        t++;
    }

    printf("The array contains the sum of each row:");
    printf("\n");

    for(i=0;i<t;i++)
    {
        printf("%.2f ", s[i]);
    }

    return 0;

}