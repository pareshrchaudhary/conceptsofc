#include <stdio.h>

int main(int argc, char **argv)
{
    int number = 10;  // Declare an integer variable
    int *pointer;    // Declare a pointer variable
    
    pointer = &number;  // Assign the address of 'number' to the pointer
    
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value stored in pointer: %p\n", pointer);
    printf("Size of the pointer: %ld bytes\n", sizeof(int));
    printf("Value pointed to by pointer: %d\n", *pointer);
    
    *pointer = 20;  // Change the value of 'number' through the pointer
    
    printf("New value of number: %d\n", number);
    
    return 0;
}

