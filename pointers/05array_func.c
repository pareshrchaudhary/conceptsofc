#include <stdio.h>

// Function to find the sum of an array of integers
int sumArray(int* arr, int size) { // int* arr is a pointer to pointer that stores address to first element of array
    printf("inside sumArray: Value = %p Address of pointer to array = %p \n\n", arr, &arr);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        printf("Sum: %d Added: %d Address: %p\n", sum, arr[i], arr+i);
    }
    return sum;
}

int main() {
    int array[] = {2, 4, 6, 8, 10};  // Array of integers
    int size = sizeof(array) / sizeof(array[0]);  // Calculating the size of the array
    
    printf("Value stored at array: %d Address of array: %p \n\n", *array, array); // array is same as &array

    sumArray(array, size);  // Calling the function with the array and its size

    return 0;
}
