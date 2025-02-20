#include<stdio.h>
int main()
{
    int num,arr[10],flag=-1;
    printf("Enter Elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number which is to be found:");
    scanf("%d",&num);
    for(int i=0;i<10;i++)
    {
        if(num==arr[i])
        {
            flag=i;
            break;  
        }
    }

    if(flag!=-1)
    {
        printf("Number found at index %d",flag);
    }
    else
    {
        printf("Number does not belong in the given array");
    }
}