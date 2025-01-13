#include<stdio.h>
int main()
{
    printf("Array 1:\n");
    int arr[]={3,4,21,122,23,3,2,1,13,34};
    for(int i=0;i<10;i++)
    {
        printf("%d  ",arr[i]);
    }
    int arr2[10];
    int n;
    char arr3[n];
    printf("\nArray 2:\n");
    for(int i=0;i<10;i++)
    {
        printf("Enter element number %d:",i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d  ",arr2[i]);
    }
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element number %d:",i+1);
        scanf("%c  ",&arr3[i]);
    }
    printf("Array 3:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c  ",arr3[i]);
    }
    int num;
    printf("\nENTER THE INDEX NUMBER FOR ARRAY 1:");
    scanf("%d",&num);
    printf("Number at Index %d is %d",num,arr[num]);
    return 0;
    
}