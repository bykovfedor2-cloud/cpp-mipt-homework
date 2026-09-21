#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Находим первое число, кратное c, которое >= a
    int start = a;
    if (start % c != 0) {
        start = start + (c - (start % c));
    }

    // Печатаем числа с шагом c, используя флаг для пробелов
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
