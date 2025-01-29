#include <stdio.h>

int main(){
    int n, i;
    int choice;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter elements in Array A1:\n"); 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    for (i = 0; i < n; i++) {
        printf("[%d]:%d ", i, arr1[i]);
    }
        printf("\n\nMenu \n");
        printf("1. Insert an element\n");
        printf("2. Delete an element by value\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        int index, value, found;
        switch (choice) {
        case 1:
                printf("Enter index to insert at: ");
                scanf("%d", &index);
                printf("Enter value to insert: ");
                scanf("%d", &value);
                if (index < 0 || index > n) {
                    printf("Invalid index!\n");
                } else {
                    for (i = n; i > index; i--) {
                        arr1[i] = arr1[i - 1];
                    }
                    arr1[index] = value;
                    n++;
                }
                

        
        case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr1[i] == value) {
                        found = 1;
                        break;
                    }
                }
                if (found) {
                    for (; i < n - 1; i++) {
                        arr1[i] = arr1[i + 1];
                    }
                    n--;
                } else {
                    printf("Element not found!\n");
                }
               
        case 3:
                printf("\nFinal Array:  ");
                for (i = 0; i < n; i++) {
                printf("[%d]:%d ", i, arr1[i]);
                }

                printf("nExiting program.\n");
                break;
        default:
                printf("Invalid choice!\n");
        
    }
    return 0;

}
