#include <stdio.h>

int Add(int a, int b) {
    return a + b;
}


int main() {
    // Declare a pointer to a function that takes two integers as parameters and returns an integer
    int (*pointer)(int, int);

    // Assign the address of the 'add' function to the pointer
    printf("Address of function Add: %p\n", &Add);
    pointer = Add; // Add or *Add both are same

    // Use the pointer to call the function
    int result = (*pointer)(5, 3); // brackets are necessary or it will be function that returns pointer.
    printf("Result of addition: %d\n", result);

    return 0;
}