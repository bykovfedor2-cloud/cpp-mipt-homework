#include <stdio.h>

// Функция вычисления факториала
// long long, чтобы вместить большие числа
long long fact(int n) {
    long long result = 1;  // типа long long
    
    // Цикл от 1 до n
    for (int i = 1; i <= n; ++i) {
        result *= i;  
    }
    
    return result;
}

int main() {
    int k;
    
    // Считываем число
    scanf("%i", &k);
    
    // Печатаем факториал
    printf("%lli\n", fact(k));
    
    return 0;
}