#include<stdio.h>
#include<stdlib.h>

int* Add(int* a, int* b){
    printf("Inside function");
    printf("Value of a: %d  Address of a: %p Value of b: %d Address of b: %p\n", *a, a, *b, b);
    int* c = (int*)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}

int main(){
    int a = 2, b = 4;
    printf("Inside main");
    printf("Value of a: %d  Address of a: %p Value of b: %d Address of b: %p\n", a, &a, b, &b); 
    int *ptr = Add(&a, &b);
    printf("Back again in main\n");
    printf("Sum: %d\n", *ptr); 
}