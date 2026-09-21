#include <stdio.h>

int main(void) {
    int limit = 0;
    scanf("%i", &limit);

    for (int k = 1; k <= limit; k++) {
        printf("%3i -> %3i -> %3i\n", k, k * k, k * k * k);
    }

    return 0;
}
