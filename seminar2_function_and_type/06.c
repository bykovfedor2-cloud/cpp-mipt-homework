#include <stdio.h>

// Массив для мемоизации
// -1 означает, что ещё не считали
long long memo[100];

long long trib(int n) {
    // Нач условия
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 1;
    
    // Если уже считали, то берём из памяти
    if (memo[n] != -1) {
        return memo[n];
    }
    
    // Иначе считаем, сохраняем и возвращаем
    memo[n] = trib(n - 1) + trib(n - 2) + trib(n - 3);
    return memo[n];
}

int main() {
    int n;
    
    // Делаем массив "не считали"
    for (int i = 0; i < 100; i++) {
        memo[i] = -1;
    }
    
    // Считываем n
    scanf("%i", &n);
    
    // Печатаем n-е число трибоначчи
    printf("%lli\n", trib(n));
    
    return 0;
}