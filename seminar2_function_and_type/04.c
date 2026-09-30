#include <stdio.h>

// ВЕРСИЯ: через цикл
int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // прибавляем последнюю цифру
        n /= 10;        // отбрасываем последнюю цифру
    }
    return sum;
}

// ВЕРСИЯ: через рекурсию
int sum_of_digits_rec(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_of_digits_rec(n / 10);
}

int main() {
    int n;
    
    // Считываем число с клавиатуры
    scanf("%i", &n);
    
    // Печатаем результат работы обеих функций
    printf("%i\n", sum_of_digits(n));
    printf("%i\n", sum_of_digits_rec(n));
    
    return 0;
}