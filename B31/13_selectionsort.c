#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter Element:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        int min=i;
        {
            for(int j=i+1;j<10;j++)
            {
                if(arr[min]>arr[j])
                {
                    min=j;
                }
            }
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d  ",arr[i]);
    }
}