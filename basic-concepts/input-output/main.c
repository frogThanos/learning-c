#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Please enter your name: ");
    scanf("%s", str);

    printf("Please enter your age: ");
    scanf("%d", &i);

    printf("\nYou entered: %s %d\n", str, i);

    return 0;
}

