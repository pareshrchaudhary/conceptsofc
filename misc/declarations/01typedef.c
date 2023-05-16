#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a structure
typedef struct {
    char name[20];
    int age;
    float height;
    int* scores;
} Person;

int main() {
    // Declare a variable of type 'Person'
    Person person1;

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

    // Print the values of structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    // Print the scores
    printf("Scores: ");
    for (int i = 0; i < numScores; i++) {
        printf("%d ", person1.scores[i]);
    }
    printf("\n");

    // Deallocate memory for scores array
    free(person1.scores);

    return 0;
}   