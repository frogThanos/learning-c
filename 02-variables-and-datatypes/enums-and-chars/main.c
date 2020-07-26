#include <stdio.h>

int main() {
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
    printf("Enum\n");
    printf("\n");
    myColor = red;
    printf("%u\n", myColor);
    myColor = yellow;
    printf("%u\n", myColor);
    myColor = blue;
    printf("%u\n", myColor);
    printf("\n");

    printf("Characters\n");
    printf("\n");
    // declaire a character
    char thanos;
    // have to assign it using single quotes
    // double quotes are used for assigning strings
    thanos = 't';
    printf("%u\n", thanos);
}
