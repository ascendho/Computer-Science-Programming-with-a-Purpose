#include <stdio.h>

int main() {
    int f = 0, g = 1;
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", f);
        f = f + g;
        g = f - g;
    }

    return 0;
}