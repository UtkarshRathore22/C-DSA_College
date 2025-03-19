// take array of age and find min max and avg of that
#include<stdio.h>
int main()
{
    int arr[5],i,avg; 
    int max,min,sum=0;
    printf("Enter the age of students:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Age:");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
        avg= sum/5;
    }
    printf("\nAverage age:%d",avg);
    for(i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nMaximum age:%d",max);
    for(i=0;i<5;i++)
    {
       if(min>arr[i])
        {
            min=arr[i];
        } 
    }
    printf("\nMinimun age:%d",min);
    return 0;
}
