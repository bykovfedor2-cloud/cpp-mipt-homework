#include <stdio.h>

void bob(int n);

void alice(int n) {
    n = n * 3 + 1;
    printf("Alice: %i\n", n);
    bob(n);
}

void bob(int n) {
    n = n / 2;
    printf("Bob: %i\n", n);

    if (n == 1) {
        return;
    }
    
    // Если число всё ещё чётное — Боб продолжает делить
    if (n % 2 == 0) {
        bob(n);
    } else {
        // Если число нечётное и не 1 — передаёт Алисе
        alice(n);
    }
}

int main() {
    int n;
    
    // Считываем начальное нечётное число
    scanf("%i", &n);
    
    // Запускаем игру с Алисы
    alice(n);
    
    return 0;
}