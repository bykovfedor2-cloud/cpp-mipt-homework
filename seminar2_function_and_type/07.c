#include <stdio.h>

int count_even(int array[], int size) {
    int count = 0;  // Счётчик чётных чисел
    
    // Проходим по всем элементам массива от 0 до size-1
    for (int i = 0; i < size; i++) {
        // Проверяем, чётный ли текущий элемент
        if (array[i] % 2 == 0) {
            count++; 
        }
    }
    
    return count;  // Возвращаем итоговое количество
}

int main() {
    int size;
    // Считываем размер массива
    scanf("%i", &size);
    // Создаём массив нужного размера
    int array[size];
    // Считываем все элементы массива
    for (int i = 0; i < size; i++) {
        scanf("%i", &array[i]);
    }
    
    // Вызываем функцию и печатаем результат
    printf("%i\n", count_even(array, size));
    
    return 0;
}