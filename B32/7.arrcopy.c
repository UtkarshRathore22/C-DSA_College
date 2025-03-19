#include<stdio.h>
int main()
{
    int i;
    int arr1[5];
    printf("Enter the value of an array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Array:");                                         
    for(i=0;i<5;i++)
    {
        printf("%d ",arr1[i]);
    }
    int arr2[5];

    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\nCopied Array:");                                         
    for(i=0;i<5;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}