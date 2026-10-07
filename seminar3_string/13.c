#include <stdio.h>
#include <stdlib.h>  // Для atoi
#include <string.h>

int main(int argc, char* argv[]) {
    // Проверяем, что передан ровно 1 аргумент (+ имя программы = argc 2)
    if (argc != 2) {
        printf("Usage: %s \"a op b\"\n", argv[0]);
        return 1;
    }
    
    int a, b;
    char op;
    
    // sscanf считывает из строки argv[1]:
    //   %i — целое число
    //   %c — один символ (оператор)
    //   %i — целое число
    // Возвращает количество успешно считанных элементов
    if (sscanf(argv[1], "%i %c %i", &a, &op, &b) != 3) {
        printf("Error\n");
        return 1;
    }
    
    int result;
    
    // Выполняем операцию в зависимости от оператора
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Error: division by zero\n");
                return 1;
            }
            result = a / b;
            break;
        default:
            printf("Error: unknown operator '%c'\n", op);
            return 1;
    }
    
    printf("%i\n", result);
    
    return 0;
}