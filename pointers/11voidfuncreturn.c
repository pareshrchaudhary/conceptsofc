#include <stdio.h>

/* 
//The void* type is a generic pointer that can be used to point to any data type. 
// This is often used in cases where the specific type of the returned value is unknown 
// or needs to be determined dynamically.
*/
void* func () {
    printf("Inside void function \n");
    return 1;
}

int main() {
    int a = 0;
    a = func();
    printf("void function returns %d \n", a);

    return 0;
}