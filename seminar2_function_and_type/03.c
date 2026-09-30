#include <stdio.h>

void print_even(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            printf("%i ", i);
        }
    }
    printf("\n");
}

int main() {
    int a, b;
    
    // Считываем значения a и b с клавиатуры
    scanf("%i %i", &a, &b);
    
    // Вызываем функцию с введенными значениями
    print_even(a, b);
    
    return 0;
}