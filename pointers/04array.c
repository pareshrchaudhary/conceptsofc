#include <stdio.h>

int main() {
  int len = 3;
  int mainarray[] = {11, 22, 33}; // easy initialization
  printf("Address of array: %p \n", mainarray);
  int *ind = mainarray; 

  for(int i = 0; i < len; i++) {
    printf("Value of mainarray[%d] using normal indexing is: %d Address: %p \n", i, mainarray[i], mainarray+i); // mainarray+i == &mainarray[i]
  }

  for(int i = 0; i < len; i++) {
    printf("Value of mainarray[%d] using pointer indexing is: %d Address: %p  \n", i, *ind, ind);
    ind++;
  }  

  return 0;  // return all successful
}