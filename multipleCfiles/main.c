// main.c
// to compile everything run gcc -o mulfiles main.c fileA.c fileB.c
#include "header.h"
#include <stdio.h>

int globalVariable = 0;

int main() {
    printf("Started in main \n");
    functionA();
    functionB();
  
    // Additional code
  
    return 0;
}
