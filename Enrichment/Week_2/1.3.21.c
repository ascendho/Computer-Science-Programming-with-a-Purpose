#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *endptr;

    int i = strtol(argv[1], &endptr, 10);
    int k = strtol(argv[2], &endptr, 10);



    return 0;
}