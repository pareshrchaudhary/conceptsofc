#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

union Shape {
    struct Rectangle rectangle;
    int radius;
};

void printRectangle(struct Rectangle rect) {
    printf("Rectangle - Width: %d, Height: %d\n", rect.width, rect.height);
}

int main() {
    union Shape shape;

    shape.rectangle.width = 10;
    shape.rectangle.height = 5;

    // Accessing as a struct
    printRectangle(shape.rectangle);

    shape.radius = 7;

    // Accessing as a union
    printf("Circle - Radius: %d\n", shape.radius);

    // Accessing as a struct after using the union as a circle
    printRectangle(shape.rectangle);

    return 0;
}