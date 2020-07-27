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
    _Bool boolC89Var = 1;
    // we can however assing the bool a 1 instead of true
    bool boolC99Var = 0;

    printf("The integerVar is %i\n", integerVar);
    printf("The floatingVar is %f\n", floatingVar);
    printf("The doubleVar is %e\n", doubleVar);
    printf("The doubleVar is %g\n", doubleVar);
    printf("The charVar is %c\n", charVar);
    printf("The boolC89Var is %i\n", boolC89Var);
    printf("The boolC99Var is %i\n", boolC99Var);
    printf("Multiple variables on one line");
    printf("The integerVar is %i, the floatingVar is %f, the doubleVar is %e\n", integerVar, floatingVar, doubleVar);
    return 0;
}
