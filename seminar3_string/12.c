#include <stdio.h>
#include <stdlib.h>  // Для atoi — преобразования строки в число

int main(int argc, char* argv[]) {
    // Проверка, что передано ровно 3 аргумента:
    // argv[0] = имя программы
    // argv[1] = слово
    // argv[2] = число
    if (argc != 3) {
        return 1;  // 1 означает "ошибка"
    }
    
    // argv[1] это слово
    char* word = argv[1];
    
    // argv[2] — это число, но приходит как строка "5". Функция atoi превращает строку в число
    int count = atoi(argv[2]);
    
    // Печатаем слово count раз
    for (int i = 0; i < count; i++) {
        printf("%s\n", word);
    }
    
    return 0;
}