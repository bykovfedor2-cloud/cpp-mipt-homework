#include <stdio.h>

int get_next_collatz(int val) {
    if (val % 2 == 0) {
        return val / 2;
    }
    return 3 * val + 1;
}

int main(void) {
    int current = 0;
    scanf("%i", &current); 

    int steps = 1;         
    int peak = current;     

    while (current != 1) {
        printf("%i ", current);

        if (current > peak) {
            peak = current;
        }

        current = get_next_collatz(current);
        steps++;
    }
    printf("1\n");
    printf("Length = %i, Max = %i\n", steps, peak);
    return 0;
}
