#include <stdio.h>

// Функция проверки високосного года
// 1 - если год високосный, 0 иначе
int is_leap_year(int year) {
    // високосный, если делится на 4
    if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

// Функция вычисления доли года
float yearfrac(int year, int day) {
    int days_in_year;
    
    // Определяем количество дней в году
    if (is_leap_year(year)) {
        days_in_year = 366;  
    } else {
        days_in_year = 365;  
    }
    
    // Доля года = день / количество дней в году
    // (float)day — приводим к одному типу, чтобы деление было вещественным
    return (float)day / days_in_year;
}

int main() {
    int year, day;
    scanf("%i %i", &year, &day);
    printf("%.5f\n", yearfrac(year, day));
    
    return 0;
}