#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3] = { 5, 6, 9, 8, 2, 3, 4, 1, 0};
    //initialization of array
    printf("Array in 2D:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //searching element in array
    printf("Enter the index value:");
    scanf("%d %d",&i,&j);
    printf("the searched element:%d ",arr[i][j]);

    //modification of element in array
    arr[0][2]=32;
    arr[1][0]=66;
    printf("\nModified array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}