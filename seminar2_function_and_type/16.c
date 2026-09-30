#include <stdio.h>

// n — количество членов ряда
double calculate_pi(int n) {
    double pi = 0.0;  
    
    // Цикл от 1 до n
    for (int i = 1; i <= n; ++i) {
        // (-1)^(i+1) можно вычислить так:
        double sign;
        if (i % 2 == 1) {
            sign = 1.0;   // i нечётное 
        } else {
            sign = -1.0;  // i чётное 
        }
        
        // Добавляем член sign / (2*i - 1)
        pi += sign / (2 * i - 1);
    }

    return 4 * pi;
}

int main() {
    int n;
    
    // Считываем количество членов ряда
    scanf("%i", &n);

    // %.10f - 10 знаков после запятой
    printf("%.10f\n", calculate_pi(n));
    
    return 0;
}