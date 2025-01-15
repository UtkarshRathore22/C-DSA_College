//make 2 arrays, one where user will give value  and one  which'll take the elements taken by the user and print it
//ask the user to enter the elements to access 
//copy the numbers accessed by the user to the other array


#include <stdio.h>

int main() {
    int i,n; //index variable 
    int nu,ni; //number of elements in user and input array 
    int au,ai;  //array user  and array ai 
    int index;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &nu);
    int arr1[nu];
    printf("Enter elements in Array A1:\n");

    for (i = 0; i < nu; i++){
        scanf("%d", &arr1[i]); 
   
    }
    for (int i = 0; i < nu; i++) {
        printf("[%d] : %d \n",i, arr1[i]);
    }


    printf("Enter the number of elements to be printed: ");
    scanf("%d", &ni);
    int arr2[ni];

    printf("\nEnter %d indices to access elements from Array A1 (0 to %d):\n", ni, nu - 1);
    for (n = 0; n < ni; n++) {
        scanf("%d", &index);

    
        if (index >= 0 && index < nu) {
            arr2[n] = arr1[index];  
        } else {
            printf("Invalid index! Please enter a valid index.\n");
            break; 
        }
    }

    printf("Accessed elements (Array A2):\n");
    for (n = 0; n < ni; n++) {
        printf("[%d]: %d\n", n, arr2[n]);
    }

    return 0;
}

