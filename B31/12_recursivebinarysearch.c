#include<stdio.h>
int rec_bin_search(int arr[],int low,int high,int num)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==num)
    {
        return mid;
    }
    else if(arr[mid]<num)
    {
        return rec_bin_search(arr,mid+1,high,num);
    }
    else if(arr[mid]>num)
    {
        return rec_bin_search(arr,low,mid-1,num);
    }
    
}
int main()
{
    int arr[10],num;
    printf("Enter Elements:");
    for(int i =0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Number that has to be found:");
    scanf("%d",&num);
    int index=rec_bin_search(arr,0,9,num);
    if(index==-1)
    {
        printf("Number does not belong in the array");
    }
    else
    {
        printf("The number was found at index %d",index);
    }
}