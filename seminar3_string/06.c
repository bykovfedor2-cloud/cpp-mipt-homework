#include <stdio.h>
#include <string.h>

// Функция проверки палиндрома. Возвращает 1, если строка — палиндром, 0 иначе
int is_palindrom(const char str[]) {
    int len = strlen(str);
    
    // Сравниваем символы с двух концов, двигаясь к середине
    // i идёт слева направо, j идёт справа налево
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str[1000];
    scanf("%s", str);
    
    if (is_palindrom(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}