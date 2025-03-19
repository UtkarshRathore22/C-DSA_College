#include <stdio.h>  
int main() 
{  
    int nE, i;  
    int pos;  
    int arr[10] = {1, 4, 7, 10, 13};   
    int size = 5;   
    printf("Array:");  
    for (i = 0;i<size;i++) 
    {  
        printf("%d ", arr[i]);  
    }
    printf("\nEnter the position for inserting element (1 to %d): ", size+1);  
    scanf("%d",&pos);  
    if (pos<1||pos>size+1) 
    {  
        printf("Invalid position!\n");  
        return 1;    
    }  
    printf("Enter the number you want to insert:");  
    scanf("%d",&nE);  

    // Insertion  
    for (i=size-1;i>=pos-1;i--) 
    {  
        arr[i+1]=arr[i];  
    }  
    arr[pos-1]=nE;  
    size++;  
    printf("\nAfter Inserting~~\nNew Array: ");  
    for (i = 0;i<size;i++) {  
        printf("%d ",arr[i]);  
    }  

    // Deletion  
    int del;  
    printf("\nEnter the element you want to delete: ");  
    scanf("%d",&del);  
    int delindex=-1;    
    for (i = 0; i < size; i++) {  
        if (arr[i]==del) 
        {  
            delindex=i;  
            break;    
        }  
    }  
    if (delindex==-1) 
    {  
        printf("Element not found!\n");  
    } 
    else 
    {  
        printf("\nAfter deleting element %d~~\n",del);  
        for (i=delindex;i<size-1;i++) 
        {  
            arr[i]=arr[i+1];  
        }  
        size--;   
    }  

    printf("New Array: ");  
    for (i=0;i<size;i++) 
    {  
        printf("%d ",arr[i]);  
    }  

    // Searching for an element in the array  
    int s;  
    printf("\n\nEnter the element to search: ");  
    scanf("%d",&s);  
    int flag=0;    

    for (i=0;i<size;i++) {  
        if (arr[i]==s) 
        {    
            flag=1;  
            printf("Element %d found at index %d.\n",s,i);  
            break;  
        }  
    }  

    if (!flag) 
    {  
        printf("Element %d not found in the array.\n",s);  
    }  

    return 0;
}