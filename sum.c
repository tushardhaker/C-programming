#include <stdio.h>

int main() {
    int n, i, min;
    
    // Asking user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    // Creating an array of size n
    int array[n];
    
    // Taking array input from the user
    printf("Enter %d elements of the array: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    // Assuming the first element is the smallest
    min = array[0];
    
    // Loop through the array to find the smallest element
    for(i = 1; i < n; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }
    
    // Printing the smallest element
    printf("The smallest element in the array is: %d\n", min);
    
    return 0;
}