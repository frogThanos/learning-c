#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Format specifiers\n");

    // different variable types
    int integerVar = 90;
    float floatingVar = 50.56;
    double doubleVar = 9.44e+11;
    char charVar = 'A';

    // there is no format specifier for the C99 bool type :(
    // we need to use the _Bool from C89
    _Bool boolVar = 1;

    printf("The integerVar is %i\n", integerVar);
    printf("The floatingVar is %f\n", floatingVar);
    printf("The doubleVar is %e\n", doubleVar);
    printf("The doubleVar is %g\n", doubleVar);
    printf("The charVar is %c\n", charVar);
    printf("The boolVar is %i\n", boolVar);
}
