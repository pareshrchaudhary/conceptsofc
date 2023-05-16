#include <stdio.h>

void incrementByValue(int num) {
    num++;
    printf("Inside incrementByValue function: Address = %p Value = %d\n", &num, num);
}

void incrementByReference(int* num) {
    (*num)++;
    printf("Inside incrementByReference function: Address = %p Value = %d\n", &num, *num);
}

int main() {
    int x = 5;
    printf("Address of the variable: %p Value: %d\n  \n", &x, x);
    
    incrementByValue(x);
    printf("After increment by value: %d\n \n", x);

    incrementByReference(&x);
    printf("After increment by reference: %d\n", x);
    return 0;
}