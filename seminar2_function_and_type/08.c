#include <stdio.h>

void reverse(int array[], int size) {
    // Идея: меняем местами первый и последний элемент,
    // потом второй и предпоследний, и так далее до середины.
    
    for (int i = 0; i < size / 2; i++) {
        // Сохраняем левый элемент во временную переменную
        int temp = array[i];
        // На место левого ставим правый
        array[i] = array[size - 1 - i];
        // На место правого ставим сохранённый левый
        array[size - 1 - i] = temp;
    }
}

int main() {
    int size;
    scanf("%i", &size);
    
    int array[size];
    for (int i = 0; i < size; i++) {
        scanf("%i", &array[i]);
    }
    
    // Переворачиваем массив
    reverse(array, size);
    
    // Печатаем перевёрнутый массив
    for (int i = 0; i < size; i++) {
        printf("%i ", array[i]);
    }
    printf("\n");
    
    return 0;
}