#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int start = a;
    if (start % c != 0) {
        start = start + (c - (start % c));
    }

    int first = 1;
    for (int i = start; i <= b; i += c) {
        if (!first) {
            printf(" ");
        }
        printf("%d", i);
        first = 0;
    }
    printf("\n");

    return 0;
}
