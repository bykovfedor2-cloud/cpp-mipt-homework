#include <stdio.h>

int main(void) {
    int limit = 0;
    scanf("%d", &limit);

    for (int k = 0; k <= limit; k++) {
        printf("%3d -> %3d -> %3d\n", k, k * k, k * k * k);
    }

    return 0;
}