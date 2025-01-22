#include <stdio.h>


int main()
{   
    int i,j;
    int row,col,val;
    int arr2[2][3] = {10, 20, 30, 40, 50, 60};

    printf("\nThe elements of the 2D array printed in row major order are:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element at position (%d, %d) = %d\n", i, j, arr2[i][j]);
        }
    }

    printf("\nThe elements of the 2D array printed in column major order are:\n");
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Element at position (%d, %d) = %d\n", j, i, arr2[i][j]);
        }
    }
    
    printf("\nEnter the row index: ");
    scanf("%d", &row);
    printf("Enter the column index: ");
    scanf("%d", &col);

    if (row >= 0 && row < 2 && col >= 0 && col < 3)
    {
        printf("Element at position (%d, %d) = %d\n", row, col, arr2[row][col]);
    }
    else
    {
        printf("Invalid indices.\n");
    }

    printf("\nEnter the row index: ");
    scanf("%d", &row);
    printf("Enter the column index: ");
    scanf("%d", &col);
    printf("Enter the updated value: ");
    scanf("%d", &val);

    if (row >= 0 && row < 2 && col >= 0 && col < 3)
    {
        arr2[row][col]=val;
        printf("Updated Element at position (%d, %d) = %d\n", row, col, arr2[row][col]);
    }
    else
    {
        printf("Invalid indices.\n");
    }
    

    return 0;
}

   

