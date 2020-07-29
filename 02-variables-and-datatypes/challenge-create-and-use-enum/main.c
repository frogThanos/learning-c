#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Create and use an enum\n");
    printf("======================\n");

    enum Company {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT,
    };

    enum Company XEROX_VAR;
    enum Company GOOGLE_VAR;
    enum Company EBAY_VAR;

    XEROX_VAR = XEROX;
    GOOGLE_VAR = GOOGLE;
    EBAY_VAR = EBAY;

    printf("XEROX_VAR contains %u\n", XEROX_VAR);
    printf("GOOGLE_VAR contains %u\n", GOOGLE_VAR);
    printf("EBAY_VAR contains %u\n", EBAY_VAR);

    return 0;
}
