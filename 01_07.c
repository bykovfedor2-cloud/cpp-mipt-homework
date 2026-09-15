#include <stdio.h>

int get_sign(int num) {
    return (num % 2 == 0) ? 1 : -1;
}

int compute_matrix_sum(int rows, int cols) {
    int total = 0;
    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= cols; c++) {
            total += get_sign(r + c) * r * c;
        }
    }
    return total;
}

int main(void) {
    int n = 0, m = 0;

    while (scanf("%d %d", &n, &m) == 2) {
        int result = compute_matrix_sum(n, m);
        printf("sum = %d\n", result);
    }

    return 0;
}