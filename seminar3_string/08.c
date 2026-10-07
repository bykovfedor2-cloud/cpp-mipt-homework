#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    printf("a=%i\n", a);
    
    char str[100];
    // ИСПРАВЛЕНИЕ: добавил пробел перед %[^\n]. пропустить все пробельные символы
    scanf(" %[^\n]", str);
    printf("str=%s\n", str);
    
    return 0;
}