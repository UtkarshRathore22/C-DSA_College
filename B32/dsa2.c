//take ages of student and find the 1.Minimum 2.Maximum 3.Average age 

#include <stdio.h>

int main() {
    int n, i, sum=0, max=0, min=0;  //initialising varibale is important
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");

    for (i = 0; i < n; i++)  // Loops from 0 to n-1
    {
        scanf("%d", &arr[i]); 
        sum += arr[i];
        
        min = arr[0];  // Initializes min with the first element
        if (arr[i] < min)
        {
            min = arr[i];
        }

        max = arr[0];  // Initializes max with the first element
        if (arr[i] > max)
        {
            max = arr[i];
        }

    }
    printf("Maximum age: %d\n", max);
    printf("Minimum age: %d\n", min);
    printf("Average age: %d\n", sum/n);

return 0;

}
