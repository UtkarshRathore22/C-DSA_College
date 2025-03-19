#include <stdio.h>  
int binary_search(int arr[],int temp,int low,int high) 
{  
    if (low>high) 
    {  
        return -1;    
    }  
    int mid=(high+low)/2;    
    if (arr[mid]==temp) 
    {  
        return mid;    
    } 
    else if (arr[mid]>temp) 
    {  
        return binary_search(arr,temp,low,mid-1);    
    } 
    else 
    {  
        return binary_search(arr,temp,mid+1,high);    
    }  
}  
int main() 
{  
    int sorted_array[]={1, 2, 3, 4, 5};  
    int n = sizeof(sorted_array)/sizeof(sorted_array[0]);  
    int value=5;  
    int result = binary_search(sorted_array,value,0,n-1);  
    if (result!=-1) 
    {  
        printf("Element found at index: %d\n",result);  
    } 
    else 
    {  
        printf("Element not found\n");  
    }  

    return 0;  
}