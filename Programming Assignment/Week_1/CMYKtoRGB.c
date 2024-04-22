#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
    char *endptr;


    double cyan = strtod(argv[1], &endptr);
    double magenta = strtod(argv[2], &endptr);
    double yellow = strtod(argv[3], &endptr);
    double black = strtod(argv[4], &endptr);

    double white = 1 - black;

    int red = round(255 * white * (1 - cyan));
    int green = round(255 * white * (1 - magenta));
    int blue = round(255 * white * (1 - yellow));

    printf("red   = %d\n", red);
    printf("green = %d\n", green);
    printf("blue  = %d\n", blue);

    return 0;
}