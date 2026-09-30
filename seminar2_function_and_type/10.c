#include <stdio.h>

#define MAX 200

// Функция присваивания: A = B
// Обе матрицы размера nxn
void assign(float A[MAX][MAX], float B[MAX][MAX], int n) {
    // Проходим по всем строкам
    for (int i = 0; i < n; i++) {
        // Проходим по всем столбцам
        for (int j = 0; j < n; j++) {
            // Копируем элемент из B в A
            A[i][j] = B[i][j];
        }
    }
}

// Вспомогательная функция для печати матрицы
void print_matrix(float A[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    // Считываем размер матрицы
    scanf("%i", &n);
    
    // Создаём две матрицы
    float A[MAX][MAX];
    float B[MAX][MAX];
    
    // Считываем матрицу B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &B[i][j]);
        }
    }
    
    // Копируем B в A
    assign(A, B, n);
    
    // Печатаем матрицу A (должна быть такой же, как B)
    print_matrix(A, n);
    
    return 0;
}