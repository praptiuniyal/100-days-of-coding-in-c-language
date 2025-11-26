// symmetry of matrix

#include <stdio.h>
int main()
{
    int i,j,row,col;
    int flag=0;
    
    printf("Enter the number of rows you want in the matrix:");
    scanf("%d", &row);

     printf("Enter the number of columns you want in the matrix:");
    scanf("%d", &col);

    if (row != col) 
    {
        printf("Matrix is not square, so it can't be symmetric.\n");
        return 0;
    }


    int a[row][col];



    for(i=0;i<row;i++)
    {
       
        for(j=0;j<col;j++)
        {
            printf("Enter the element:");
            scanf("%d", &a[i][j]);
           
        }
        
    }
    
    
     for (i = 0; i < row; i++)
      {
        for (j = 0; j < col; j++)
         {
            if (a[i][j] != a[j][i])
            {
                flag=1;
                break;
         }
         
         }
        }
if(flag==0)
{
    printf("true");
}
else{
    printf("false");
}
return 0;
}

