#include <stdio.h>
#include <ctype.h> 

int main() {
    char c;
    
    // Считываем ровно один символ с клавиатуры
    scanf("%c", &c);
    
    // возвращает истину (не ноль), если c — буква (A-Z или a-z)
    if (isalpha(c)) {
        printf("Letter\n");
    } 
    // возвращает истину, если c — цифра ('0'-'9')
    else if (isdigit(c)) {
        printf("Digit\n");
    } 
    // Если ни то, ни другое
    else {
        printf("Other\n");
    }
    
    return 0;
}