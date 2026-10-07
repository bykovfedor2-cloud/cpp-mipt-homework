#include <stdio.h>
#include <string.h>

int main() {
    char number[110];
    
    // Считываем число как строку
    scanf("%s", number);
    
    // Узнаём длину строки (количество цифр)
    int len = strlen(number);
    
    // Сумма цифр
    int sum = 0;
    
    // Проходим по всем символам строки
    for (int i = 0; i < len; i++) {
        // number[i] — это символ цифры
        sum += number[i] - '0';
    }
    
    printf("%i\n", sum);
    
    return 0;
}