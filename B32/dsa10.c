// binary using recursive manner
#include <stdio.h>
int Recursive(int arr[], int left, int right, int x) {
    
    if (left > right) {
        return -1; 
    }
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
        return mid;
    }

    if (arr[mid] < x) {
        return Recursive(arr, mid + 1, right, x); 
    }
    
    else {
        return Recursive(arr, left, mid - 1, x); 
    }
}

int main() {
    int n, i, x, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter elements in the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &x);

    result = Recursive(arr, 0, n - 1, x);

    if (result == -1) {
        printf("Element not there in the array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }

    return 0;
}
