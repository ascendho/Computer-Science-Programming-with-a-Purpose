#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define r 6371.0

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double toRadians(double degree);

int main(int argc, char **argv) {
    char *endptr;

    double x1 = toRadians(strtod(argv[1], &endptr));
    double y1 = toRadians(strtod(argv[2], &endptr));
    double x2 = toRadians(strtod(argv[3], &endptr));
    double y2 = toRadians(strtod(argv[4], &endptr));

    double distance = 2 * r * asin(sqrt(pow(sin((x2 - x1) / 2), 2) + cos(x1) * cos(x2) * pow(sin((y2 - y1) / 2), 2)));

    printf("%lf kilometers\n", distance);

    return 0;
}

double toRadians(double degree) {
    return degree * (M_PI / 180.0);
}