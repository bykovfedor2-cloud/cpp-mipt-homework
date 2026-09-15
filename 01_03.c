#include <stdio.h>

int main(void) {
    int val = 0;
    scanf("%d", &val);

    int is_even = (val % 2 == 0);
    int in_first_range = (val >= 0 && val <= 20);
    int in_second_range = (val > 100 && val < 200);

    if (is_even && (in_first_range || in_second_range)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}