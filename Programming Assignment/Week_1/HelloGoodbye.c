#include <stdio.h>

int main(int argc, char **argv) {

    char *firstName = argv[1];
    char *lastName = argv[2];

    printf("Hello %s and %s.\n", firstName, lastName);
    printf("Goodbye %s and %s.\n", lastName, firstName);

    return 0;
}