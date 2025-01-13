#include<stdio.h>
int main ()
{
    int n;
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    int arr3[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element number %d:",i+1);
        scanf("%d  ",&arr3[i]);
    }
    printf("Array 3:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr3[i]);
    }
    int copy[n];
    for(int i=0;i<n;i++)
    {
        copy[i]=arr3[i];
    }
    printf("\nCopy array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",copy[i]);
    }
}
