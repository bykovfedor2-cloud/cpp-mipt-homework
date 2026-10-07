#include <stdio.h>
#include <string.h>  // Для strlen()

int main() {
    // Создали два массива для строк
    char word1[1000];
    char word2[1000];

    scanf("%s %s", word1, word2);
    
    // Узнаём длины обеих строк
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    
    // Находим сколько символов всего нужно напечатать(тернарный оператор)
    int max_len = len1 > len2 ? len1 : len2;

    for (int i = 0; i < max_len; i++) {
        // Если в первом слове ещё есть символ на позиции i, то печатаем его
        if (i < len1) {
            printf("%c", word1[i]);
        }
        // Если во втором слове ещё есть символ на позиции i, то печатаем его
        if (i < len2) {
            printf("%c", word2[i]);
        }
    }
    printf("\n");
    
    return 0;
}