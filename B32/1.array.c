//length of array by user
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the no of element you want to enter:");
    scanf("%d",&n);
    int arr[n];
    printf("Now Enter the value:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array:");                                         
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}