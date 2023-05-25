#include <stdio.h>

int main() {
    int matrix[3][3] = {{3, 6, 9}, {2, 4, 8}, {1, 5, 7}};
    printf("Address of matrix (name): %p\n", matrix); // name of the array is first element in all dimensions
    printf("Address of matrix (*name): %p\n\n", *matrix); // matrix == *matrix

    printf("Size of one element: %ld \n", sizeof(int));
    printf("First element of 1st row : %d Address : %p ", **(matrix+0), matrix);
    printf("Last element of 1st row : %d Address : %p \n", *(*(matrix)+2), (*(matrix)+2));
    
    printf("First element of 2nd row : %d Address : %p ", **(matrix + 1), &matrix[1][0]);
    printf("Last element of 2nd row : %d Address : %p \n", *(*(matrix + 1)+2), (*(matrix+1)+2));

    printf("First element of 3rd row : %d Address : %p ", **(matrix + 2), &matrix[2][0]);
    printf("Last element of 3rd row : %d Address : %p \n\n", *(*(matrix + 2)+2), &matrix[2][2]);

    for(int i = 0; i<3; i++){ // double pointers used to save each row in a sequence one after another
        for (int j = 0; j<3; j++){
            printf(" %d ",*(*(matrix + i)+j));
        }
        printf("\n");
    }
    
    int *ptr = &matrix[0][0];

    printf("Accessing elements using array notation:\n"); // Using array notation
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nAccessing elements using pointer notation:\n"); // Using pointer arithmetic
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(ptr + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}