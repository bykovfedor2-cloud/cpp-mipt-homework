#include <stdio.h>
#include <string.h>  // Для strlen

// Функция безопасного копирования строк
// dest — массив, в который будем записывать
// dest_size — размер этого массива
// src — строка-источник (const)
void safe_strcpy(char dest[], size_t dest_size, const char src[]) {
    // Если размер массива 0
    if (dest_size == 0) {
        return;
    }
    
    // Узнаём длину исходной строки
    size_t src_len = strlen(src);

    // Максимум символов можем скопировать = dest_size - 1, т.к. нужно оставить место для '\0'
    size_t copy_len = src_len;
    if (copy_len >= dest_size) {
        copy_len = dest_size - 1;  // Обрезаем, если не помещается
    }
    
    // Копируем посимвольно
    for (size_t i = 0; i < copy_len; i++) {
        dest[i] = src[i];
    }
    
    // Ставим нуль в конце. Иначе не будет заканчиваться, и printf напечатает не то.
    dest[copy_len] = '\0';
}

int main() {
    char a[50] = "Mouse";
    char b[50] = "Cat";
    safe_strcpy(a, 50, b);
    printf("Test 1: %s\n", a); 

    char c[10] = "Mouse";
    char d[50] = "LargeElephant";
    safe_strcpy(c, 10, d);
    printf("Test 2: %s\n", c);  

    char e[3];
    safe_strcpy(e, 3, "Hello");
    printf("Test 3: %s\n", e);  
    
    return 0;
}