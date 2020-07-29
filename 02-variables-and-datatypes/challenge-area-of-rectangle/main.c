#include <stdio.h>
#include <stdbool.h>

double calculatePerimeter(double height, double width) {
    if(height && width) {
        return (height + width) * 2;
    }
    return 0;
};

double calculateArea(double height, double width) {
    if(height && width) {
        return height * width;
    }
    return 0;
};


int main() {
    printf("Area of a rectangle\n");
    printf("===================\n");

    double height = 6.0;
    double width = 4.0;
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = calculatePerimeter(height, width);
    area = calculateArea(height, width);

    printf("The perimeter is %f\n", perimeter);
    printf("The area is %f\n", area);
    return 0;
}
