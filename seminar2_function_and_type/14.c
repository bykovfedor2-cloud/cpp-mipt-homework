#include <stdio.h>

// Функция вычисления факториала
// unsigned long long — это для ещё больших чисел (только положительные)
unsigned long long fact(int n) {
    unsigned long long result = 1;
    
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    
    return result;
}

// Функция вычисления размещений
unsigned long long arrangements(int n, int k) {
    // A_n^k = n! / (n-k)! = n * (n-1) * ... * (n-k+1)
    unsigned long long result = 1;
    
    // Умножаем k раз: n, (n-1), (n-2), ..., (n-k+1)
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
    }
    
    return result;
}

int main() {
    int n, k;
    
    // Считываем n и k
    scanf("%i %i", &n, &k);
    
    // Печатаем размещения
    printf("%llu\n", arrangements(n, k));
    
    return 0;
}