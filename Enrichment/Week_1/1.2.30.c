#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>

#define N 5

int main() {
    srand((unsigned int) time(NULL));

    double sum = 0, min = DBL_MAX, max = DBL_MIN;

    for (int i = 0; i < N; i++) {
        double random = (double) rand() / RAND_MAX;

        // print values
        printf("%lf\n", random);

        // compute stats
        if (min > random)
            min = random;
        if (max < random)
            max = random;

        sum += random;
    }

    // print stats
    printf("Average = %lf\n", sum / N);
    printf("Min     = %lf\n", min);
    printf("Max     = %lf\n", max);

    return 0;
}