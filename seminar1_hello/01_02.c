#include <stdio.h>

int main(void) {
    int x = 0;
    scanf("%d", &x);

    if (x < 0 || x > 1000) {
        printf("Ошибочное значение\n");
    } else {
        printf("num + 1 = %d\n", x + 1);
    }

    return 0;
}
