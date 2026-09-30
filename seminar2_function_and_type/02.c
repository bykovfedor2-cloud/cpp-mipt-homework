#include <stdio.h>

int is_even(int n) {
    if (n % 2 == 0) {
        return 1; // Если остаток 0, число четное
    } else {
        return 0; // Иначе нечетное
    }
}

int main() {
    printf("%i\n", is_even(90)); // Напечатает 1
    printf("%i\n", is_even(91)); // Напечатает 0
    return 0;
}