#include <stdio.h>

// Function pointer type
typedef int (*Operation)(int, int);

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Create an array of function pointers
    Operation operations[2] = { add, subtract };

    // Call the functions using function pointers as data structures
    int a = 10, b = 5;
    for (int i = 0; i < 2; i++) {
        int result = operations[i](a, b);
        printf("Result: %d\n", result);
    }

    return 0;
}