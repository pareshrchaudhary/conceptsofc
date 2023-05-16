#include <stdio.h>

int main() {
    int value = 10;
    printf("Value of number: %d\n", value);
    printf("Address of number: %p\n \n", &value);
    int *pointer = &value;
    printf("Value stored in pointer: %p\n", pointer); // This should be equal to the address of value.
    printf("Value pointed to by pointer(* dereference): %d\n", *pointer);
    printf("Address of pointer: %p\n \n", &pointer);
    int **ptrToPtr = &pointer;
    printf("Value stored in pointer to pointer: %p\n", ptrToPtr); // This should be equal to address of pointer (&pointer)
    printf("Value pointed to by pointer to pointer (** dereference): %d\n", **ptrToPtr); 
    printf("Address of pointer to pointer: %p\n \n", &ptrToPtr);

    int ***ptrToPtrToPtr = &ptrToPtr;
    printf("Value stored in pointer to pointer: %p\n", ptrToPtrToPtr); // This should be equal to address of pointer (&ptrToPtr)
    printf("Value pointed to by pointer to pointer (** dereference): %d\n", ***ptrToPtrToPtr); 
    printf("Address of pointer to pointer: %p\n", &ptrToPtrToPtr);

    return 0;
}