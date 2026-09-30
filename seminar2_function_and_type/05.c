#include <stdio.h>

// Вспомогательная рекурсивная функция
void print_binary_helper(int x) {
    if (x == 0) return;
    print_binary_helper(x / 2); 
    printf("%i", x % 2);        
}

void print_binary(int n) {
    // Отдельная обработка нуля, потому что helper для 0 ничего не печатает
    if (n == 0) {
        printf("0");
        return;
    }
    print_binary_helper(n);
}

int main() {
    int n;
    
    // Считываем число с клавиатуры
    scanf("%i", &n);
    
    // Печатаем его двоичное представление
    print_binary(n);
    printf("\n");
    
    return 0;
}