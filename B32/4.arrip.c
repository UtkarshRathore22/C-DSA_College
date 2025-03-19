//print the sum of the array (10 arrays)
#include<stdio.h>
int main()
{ 
    int arr[10],i,sum;
    printf("Enter the element of array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray:");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nSum is:%d",sum);
    return 0;
}



