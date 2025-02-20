#include<stdio.h>
int main()
{
    int arr[10],mid,num,low=0,high=9,flag=-1;
    printf("Enter Elements:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be found:");
    scanf("%d",&num);
    while (low<=high && flag==-1)
    {
        mid=(low+high)/2;
        if(arr[mid]==num )
        {
            flag=mid;
        }
        else if(arr[mid]<num)
        {
            low=mid+1;
        }
        else if(arr[mid]>num)
        {
            high=mid-1;
        }
    }
    if (flag!=-1)
    {
        printf("Number found at index %d",flag);
    }
    else
    {
        printf("Number not found");
    }
    
    
}