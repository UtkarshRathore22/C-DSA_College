#include<stdio.h>
int main()
{
    int arr[10],count=0,index,flag=0;
    printf("Enter Elements:");
    while (flag!=1 && count<10)
    {
        scanf("%d",&arr[count]);
        count++;
        printf("Do you want to continue:");
        scanf("%d",&flag);
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\nEnter the index from where you want element to be deleted:");
    scanf("%d",&index);
    for(int i=index;i<count;i++)
    {
        arr[i]=arr[i+1];
    }
    count--;
    for(int i=0; i<count;i++)
    {
        printf("%d  ",arr[i]);
    }
    
}