#include <stdio.h>

void print(char* C){
    printf("Characters: ");
    while (*C != '\0') {
        printf("%c ", *C);
        C++;
    }

    printf("\n");

}

int main() {
    char str[] = "Hello";  // A character array 'str' containing the string "Hello"
    char *ptr = str;  // A pointer variable 'ptr' pointing to the first element of 'str'

    printf("String: %s\n", str);  // Printing the string using %s format specifier
    printf("Pointer: %p\n", (void *)ptr);  // Printing the pointer value

    ptr[0] = 'J';  // Modifying the first character of the string via pointer

    printf("Modified String: %s\n", str);  // Printing the modified string

    // Printing the characters of the string using pointer arithmetic
    print(ptr);

    return 0;
}