//Take 10 elements in an array and print their sum 
#include <stdio.h>

int main() {
    int n, i, sum=0;  //initialising varibale is important
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); //Using & is important as it returns the address of a variable
        sum += arr[i];
    }
    printf("Sum of the array: %d\n", sum);
return 0;

} 