#include <stdio.h>
#include <stdlib.h>  // Для atoi

// Функция шифрования одного символа
char encrypt_char(char c, int k) {
    // Заглавные буквы
    if (c >= 'A' && c <= 'Z') {
        return ((c - 'A' + k) % 26 + 26) % 26 + 'A';
    }
    // Строчные буквы
    else if (c >= 'a' && c <= 'z') {
        return ((c - 'a' + k) % 26 + 26) % 26 + 'a';
    }
    return c;
}

int main(int argc, char* argv[]) {
    // Проверяем количество аргументов
    if (argc != 4) {
        printf("Usage: %s <input_file> <output_file> <key>\n", argv[0]);
        return 1;
    }
    
    // argv[1] — имя входного файла
    char* input_filename = argv[1];
    // argv[2] — имя выходного файла
    char* output_filename = argv[2];
    // argv[3] — ключ шифра
    int key = atoi(argv[3]);
    
    // Открываем входной файл для чтения
    FILE* input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Error: cannot open input file %s\n", input_filename);
        return 1;
    }
    
    // Открываем выходной файл для записи
    FILE* output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Error: cannot open output file %s\n", output_filename);
        fclose(input_file);
        return 1;
    }
    
    // Читаем входной файл посимвольно
    int c;
    while ((c = fgetc(input_file)) != EOF) {
        // Шифруем символ
        char encrypted = encrypt_char((char)c, key);
        // Записываем в выходной файл
        fputc(encrypted, output_file);
    }
    
    // Закрываем оба файла
    fclose(input_file);
    fclose(output_file);
    
    printf("Encryption complete!\n");
    
    return 0;
}