#include<stdio.h>
int main()
{
    int i;
    int arr[5];
    printf("Enter the element");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}