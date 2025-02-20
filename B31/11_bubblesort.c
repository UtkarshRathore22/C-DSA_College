#include<stdio.h>
int main()
{
    int arr[10];
    printf("enter elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d  ",arr[i]);
    }
}