// WAP to read the age of all students from user and save them in an array and find average minimum and maximum of ages:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of Students:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n ; i++)
    {
        printf("Enter the age of student number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray of ages:\n");
    for (int i = 0; i < n ; i++)
    {
        printf("%d  ",arr[i]);
    }
    float sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    printf("\n\nThe average of age is:%.1f",sum/n);
    int temp=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
        }
    }
    printf("\n\nMaximum number:%d",temp);
    temp=arr[0];
    for(int i = 0; i < n; i++)
    {
        if(temp>arr[i])
        {
            temp=arr[i];
        }
    }
    printf("\n\nMinimum number:%d",temp);
}