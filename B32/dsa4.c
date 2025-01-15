#include <stdio.h>

int main() {
    int nu; 
    int i, j, count; 

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &nu);
    int arr1[nu];
    int freq[nu]; 


    printf("Enter elements in Array A1:\n");
    for (i = 0; i < nu; i++) {
        scanf("%d", &arr1[i]);
        freq[i] = 1; 
    }

    
    for (i = 0; i < nu; i++) {
        count = 1; 
        for (j = i + 1; j < nu; j++) {
            if (arr1[i] == arr1[j]) { 
                count++;
                freq[j] = 0; 
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Stores the frequency count 
        }
    }

    printf("\nFrequency of elements in Array A1:\n");
    for (i = 0; i < nu; i++) {
        if (freq[i] != 0) { 
            printf("%d Frequency : %d\n", arr1[i], freq[i]);
        }
    }

    return 0;
}
