#include<stdio.h>
int main()
{
    int value,index;
    int arr[10];
    int count=0;
    int flag=0;
    printf("Enter the elements:");
    while(flag==0)
    {
        scanf("%d",&arr[count]);
        count++;
        printf("Want to continue:");
        scanf("%d",&flag);
    }
    
    for(int i=0;i<count;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\nEnter the element u want to insert:");
    scanf("%d",&value);
    printf("Enter Index:");
    scanf("%d",&index);
    if(index<count)
    {
        for(int i=count;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=value;
        count++;
    }
    for(int i=0;i<count;i++)
    {
        printf("%d  ",arr[i]);
    }
}