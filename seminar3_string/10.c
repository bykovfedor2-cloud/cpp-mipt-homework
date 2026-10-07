#include <stdio.h>
#include <string.h>  // Для strcmp

int main() {
    int n;
    
    // Считываем количество команд
    scanf("%i", &n);
    
    // Начальные координаты
    int x = 0, y = 0;
    
    // Проходим по всем командам
    for (int i = 0; i < n; i++) {
        int distance;
        char direction[20];
        
        // Считываем расстояние и направление
        scanf("%i %s", &distance, direction);
        
        //Функция strcmp - посимвольно сравнивает две строки и возвращает числовой результат в зависимости от их порядка. 
        // strcmp == 0 означает "строки одинаковые"
        if (strcmp(direction, "North") == 0) {
            y += distance;       // Идём на север — увеличиваем y
        } 
        else if (strcmp(direction, "South") == 0) {
            y -= distance;       // Идём на юг — уменьшаем y
        } 
        else if (strcmp(direction, "East") == 0) {
            x += distance;       // Идём на восток — увеличиваем x
        } 
        else if (strcmp(direction, "West") == 0) {
            x -= distance;       // Идём на запад — уменьшаем x
        }
    }
    
    // Печатаем финальные координаты
    printf("%i %i\n", x, y);
    
    return 0;
}