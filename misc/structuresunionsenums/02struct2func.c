#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a structure
struct Person {
    char name[20];
    int age;
    float height;
    int* scores;
};

// Function prototype
void print(struct Person* person);

int main() {
    // Declare a variable of type 'Person'
    struct Person person1;
    // The address of the first member is identical with the address of the structure object itself.
    printf("Address of struct: %p\n", &person1); 
    printf("Address of 1st member of struct: %p\n", &(person1.name));

    // Access and assign values to structure members
    strcpy(person1.name, "John");
    person1.age = 25;
    person1.height = 1.75;

    // Dynamically allocate memory for the scores array
    int numScores = 3;
    person1.scores = (int*)malloc(numScores * sizeof(int));

    // Assign values to scores array
    person1.scores[0] = 85;
    person1.scores[1] = 92;
    person1.scores[2] = 78;

    // Call the function and pass the structure by address
    print(&person1);

    // Deallocate memory for scores array
    free(person1.scores);
    return 0;
}

// Function definition
void print(struct Person* person) {
    // Print the values of structure members
    printf("Name: %s\n", (*person).name); 
    printf("Age: %d\n", person->age); // struct->data == (*pointer).data
    printf("Height: %.2f\n", person->height);

    // Print the scores
    printf("Scores: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", person->scores[i]);
    }
    printf("\n");
}