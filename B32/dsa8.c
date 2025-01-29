//linear searching an array and printing index of a given value 
#include <stdio.h>

int main() {
    int n, i, value;
    int found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr1[n];
    printf("Enter elements in Array A1:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the value to be searched: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (arr1[i] == value) {
            printf("Value found at index: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Value not found in the array.\nArray 1 = ");
        for (i = 0; i < n; i++) {
                printf("[%d]:%d ", i, arr1[i]);
                }
    }
    
    return 0;
}
