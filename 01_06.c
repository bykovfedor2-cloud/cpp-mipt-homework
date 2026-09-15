#include <stdio.h>

int get_next_collatz(int val) {
    if (val % 2 == 0) {
        return val / 2;
    }
    return 3 * val + 1;
}

int main(void) {
    int current = 0;
    int steps = 0;
    int peak = 0;

    scanf("%d", &current);

    while (current != 1) {
        printf("%d ", current);

        if (current > peak) {
            peak = current;
        }

        current = get_next_collatz(current);
        steps++;
    }

    printf("\n");
    printf("Length = %d ", steps);
    printf("Max = %d\n", peak);

    return 0;
}