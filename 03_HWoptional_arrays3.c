// A dice is rolled 600 times Count frequency of each number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   
    int i=0,arr[600],visit[600];
    srand(time(0));
    while(i<600)
    {
        arr[i]=(rand()%6)+1;
        visit[i]=0;
        i++;
    }
    // for ( i = 0; i < 600; i++)
    // {
    //     printf("%d  ",arr[i]);   DONE BY UTKARSH RATHORE AT 7:27pm
    // }
    for ( i = 0; i < 600; i++)
    {
        if(visit[i]!=1)
        {
            int count=1;
            for(int j=i+1;j<600;j++)
                {
                    if(arr[i]==arr[j])
                    {
                        count++;
                        visit[j]=1;
                    }  
                }
            printf("\nFrequency of %d is %d\n",arr[i],count); 
        }
    }
    return 0;
}