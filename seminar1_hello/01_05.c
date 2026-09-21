#include <stdio.h>
#include <limits.h>

int main(void) {
    int count = 0;
    scanf("%d", &count);

    int maximum = INT_MIN;
    int max_freq = 0;

    for (int idx = 0; idx < count; idx++) {
        int current = 0;
        scanf("%d", &current);

        if (current > maximum) {
            maximum = current;
            max_freq = 1;
        } else if (current == maximum) {
            max_freq++;
        }
    }

    printf("MAX = %d\n", maximum);
    printf("MAX_COUNT = %d\n", max_freq);

    return 0;
}
