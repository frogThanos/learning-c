#include <stdio.h>

int main() {
    printf("Enums and Chars\n");
    printf("\n");

    // declaire an Enum
    enum primaryColor {
        red,
        yellow,
        blue,
    };

    // declaire variable of enum type
    enum primaryColor myColor;
    // assign variable only one of the enum types
    // the enum is a list of integers so the code below
    // should print 0,1,2 ...
    myColor = red;
    printf("%u\n", myColor);
    myColor = yellow;
    printf("%u\n", myColor);
    myColor = blue;
    printf("%u\n", myColor);
}
