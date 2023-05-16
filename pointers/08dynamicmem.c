#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *arr;

    /*
    malloc --> "memory allocation"
    Use --> dynamically allocate a block of memory. 
    Syntax --> (datatype *) malloc(total number of bytes to allocate)
    Returns --> A pointer to the allocated memory block. The content of the 
    allocated memory is uninitialized, meaning it can contain garbage values.

    It is typically used when you need to allocate memory for a specific size.
    */
    void *p = malloc(sizeof(int)); // malloc is generic function and can be used with typecasting
    printf("Address of allocated memory: %p \n", p);
    free(p); // Always free the memory 

    int *num = (int *)malloc(sizeof(int)); // 1 integer sized memory address tycasted
    *num = 42;
    printf("Single integer: %d Address: %p\n", *num, num);
    free(num);
    
    /*
    calloc --> "contiguous allocation" 
    Use --> Dynamically allocate multiple blocks of memory, initializing them to zero. 
    Syntax --> (datatype *) calloc(number of elements, size of each element)
    Returns--> A pointer to the allocated memory block. The total amount of memory allocated 
    is (number of elements) * (size of each element). 
    
    It is commonly used when you need to allocate memory for arrays or structures and want the memory to be 
    initialized to zero.
    */
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int *)calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    printf("Array (calloc): ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    /*
    realloc --> "reallocate"
    Use --> Dynamically change the size of an already allocated memory block.
    Syntax --> (datatype *) realloc(pointer to previously allocated memory block, new size in bytes)
    Returns --> A pointer to the reallocated memory block, which may be the same as the original pointer or a new location.

    realloc can also be used to allocate memory by passing a NULL pointer as the first argument, which is equivalent to using malloc.

    It is used when you need to resize an existing memory block or allocate memory based on a changing size.
    */
    int numCopies;
    printf("Enter the number of copies to make: ");
    scanf("%d", &numCopies);

    int newSize = size * numCopies;
    int *temp = (int *)realloc(arr, newSize * sizeof(int));
    if (temp == NULL) {
        printf("Failed to reallocate memory. Exiting...\n");
        free(arr);
        return 1;
    } else {
        arr = temp;
    }

    // Initialize the extended portion of the array with values from the original array
    for (int i = size; i < newSize; i++) {
        arr[i] = arr[i % size];
    }

    printf("Extended Array: "); // printing extended array
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}