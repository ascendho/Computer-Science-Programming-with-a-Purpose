#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    char *endptr;

    int a = strtol(argv[1], &endptr, 10);
    int b = strtol(argv[2], &endptr, 10);
    int c = strtol(argv[3], &endptr, 10);

    bool flag = false;
    bool arePositive = a > 0 && b > 0 && c > 0, isRightTriangle = false;

    if (arePositive) {
        isRightTriangle = a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a;
        flag = isRightTriangle ? true : false;
    } else
        flag = false;

    printf("%s\n", flag ? "true" : "false");

    return 0;
}