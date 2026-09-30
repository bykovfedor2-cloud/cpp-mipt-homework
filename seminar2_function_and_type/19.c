#include <stdio.h>
#include <stdint.h> // Для int8_t, int32_t, uint32_t

int main() {
    // Печатаем имя типа и его размер в байтах
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long long: %zu\n", sizeof(long long));
    printf("size_t: %zu\n", sizeof(size_t));
    printf("int8_t: %zu\n", sizeof(int8_t));
    printf("int32_t: %zu\n", sizeof(int32_t));
    printf("uint32_t: %zu\n", sizeof(uint32_t));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    
    // Размеры массивов: размер одного элемента * количество элементов
    printf("int[100]: %zu\n", sizeof(int[100]));     // Обычно 4 * 100 = 400
    printf("char[100]: %zu\n", sizeof(char[100]));   // Обычно 1 * 100 = 100
    
    return 0;
}