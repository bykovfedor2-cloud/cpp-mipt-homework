#include <stdio.h>

#define MAX 200

// Функция A = B
void assign(float A[MAX][MAX], float B[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = B[i][j];
        }
    }
}

// Функция C = A * B
void multiply(float A[MAX][MAX], float B[MAX][MAX], float C[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Функция C = A^k
void power(int A[MAX][MAX], int C[MAX][MAX], int n, int k) {
    // B — временная матрица, в которой будет храниться A
    int B[MAX][MAX];
    
    // B = A (копируем A в B)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = A[i][j];
        }
    }
    
    // C = A (начальное значение C — это A^1)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j];
        }
    }
    
    // Делаем k-1 умножений: C = C * B; после 1-й итерации: C = A * A = A^2; после 2-й итерации: C = A^2 * A = A^3;...; после (k-1)-й итерации: C = A^k
    for (int step = 0; step < k - 1; step++) {
        // Временная матрица для результата умножения
        int temp[MAX][MAX];
        
        // temp = C * B
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp[i][j] = 0;
                for (int k_idx = 0; k_idx < n; k_idx++) {
                    temp[i][j] += C[i][k_idx] * B[k_idx][j];
                }
            }
        }
        
        // C = temp
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                C[i][j] = temp[i][j];
            }
        }
    }
}

// Печать матрицы
void print_matrix(int A[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, k;
    
    // Получаем размер матрицы и степень
    scanf("%i %i", &n, &k);
    
    int A[MAX][MAX];
    int C[MAX][MAX];
    
    // Считываем матрицу A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%i", &A[i][j]);
        }
    }
    
    // Возводим A в степень k
    power(A, C, n, k);
    
    // Выводим результат
    print_matrix(C, n);
    
    return 0;
}