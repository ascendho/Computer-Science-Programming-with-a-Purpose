#include <stdio.h>
#include <stdlib.h>
#include <alg.h>

int main(int argc, char **argv) {
    char *endptr;
    int a = strtol(argv[1], &endptr, 10);
    int b = strtol(argv[2], &endptr, 10);
    int c = strtol(argv[3], &endptr, 10);

    // compute stats
    int min = min(a, min(b, c));
    int max = max(a, max(b, c));
    int median = a + b + c - min - max;

    printf("%d\n", min);
    printf("%d\n", median);
    printf("%d\n", max);

    return 0;
}