#include <stdio.h>  

int main() 
{  
    int arr[5]={32,65,12,76,23};  
    int val=32;  
    int size=sizeof(arr)/sizeof(arr[0]);    
    for(int i=0;i<size-1;i++) 
    {  
        for(int j=0;j<size-i-1;j++) 
        {  
            if(arr[j]>arr[j+1]) 
            {  
                int temp=arr[j];  
                arr[j]=arr[j+1];  
                arr[j+1]=temp;  
            }  
        }  
    }   
    int low=0,mid,high=size-1;  
    int flag=0;  
    while (low<=high)
    {  
        mid=(low+high)/2;  
        if (arr[mid]==val) 
        {  
            flag=1;  
            break;  
        } 
        else if(arr[mid]<val) 
        {  
            low = mid + 1;  
        } 
        else 
        {  
            high=mid-1;  
        }  
    }  
    if(flag==1) 
    {  
        printf("The element %d found in the array.\n", val);  
    } 
    else 
    {  
        printf("Element not found.\n");  
    }   
    return 0;  
}