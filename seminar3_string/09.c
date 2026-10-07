#include <stdio.h>

// Функция укорачивания строки до первого пробела
void trim_after_first_space(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == ' ') {
            // Заменяем его на нуль. Теперь строка "заканчивается" на этом месте.
            str[i] = '\0';
            return;
        }
    }
}

int main() {
    char a[] = "Cats and Dogs";
    
    printf("%s\n", a); 
    trim_after_first_space(a);
    printf("%s\n", a);  
    

    char b[] = "Hello";
    printf("%s\n", b);  
    trim_after_first_space(b);
    printf("%s\n", b);  
    

    char c[] = " test";
    printf("%s\n", c);  
    trim_after_first_space(c);
    printf("%s\n", c);  
    
    return 0;
}