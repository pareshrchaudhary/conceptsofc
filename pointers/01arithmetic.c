#include <stdio.h>

int main(int argc, char **argv)
{
    int mainarray[] = {11, 22, 33, 44, 55, 66, 77}; // easy initialization
    char char_array[] = {"ABCDFGH"};
    
    int *add = mainarray;
    printf("size of int data type %ld \n", sizeof(int));
    printf("First element :  %d, Address : %p \n", *add, add);  
    printf("Second element : %d, Address ( + 1) : %p \n", *(add+1), add+1); 

    char *add_char = char_array;
    printf("size of char data type %ld \n", sizeof(char));
    printf("First element :  %c, Address : %p \n", *add_char, add_char);  
    printf("Second element : %c, Address ( + 1) : %p \n", *(add_char+1), add_char+1);
}
