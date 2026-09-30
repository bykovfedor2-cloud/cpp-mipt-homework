#include <stdio.h>

#define MAX 200

//Умножение матриц
void multiply(float A[MAX][MAX], float B[MAX][MAX], float C[MAX][MAX], int n) {
    // Проходим по всем элементам результирующей матрицы C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Очистим элемент C[i][j], чтобы мы могли нормальную сумму
            C[i][j] = 0;
            
            // Считаем сумму произведений: строка A[i] * столбец B[j]
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Функция для печати матрицы
void print_matrix(float A[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.0f ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    // Получаем размер матрицы
    scanf("%i", &n);
    
    float A[MAX][MAX];
    float B[MAX][MAX];
    float C[MAX][MAX];
    
    // Матрица A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &A[i][j]);
        }
    }
    
    // Матрицу B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &B[i][j]);
        }
    }
    
    // Умножаем A на B, результат в C
    multiply(A, B, C, n);
    
    // вывводим результат
    print_matrix(C, n);
    
    return 0;
}