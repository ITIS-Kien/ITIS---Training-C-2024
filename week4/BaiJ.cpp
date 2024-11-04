#include <stdio.h>

// Hàm input dùng để nhập các phần tử của ma trận có kích thước row x col
void input(int *arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", (arr + i * col + j)); // Nhập từng phần tử vào ma trận sử dụng con trỏ
        }
    }
}

// Hàm output dùng để in các phần tử của ma trận theo kích thước row x col
void output(int *arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *(arr + i * col + j)); // In từng phần tử của ma trận
        }
        printf("\n");
    }
}

// Hàm swap dùng để đổi giá trị của hai biến `a` và `b`
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int t; 
    scanf("%d", &t); // Nhập số lượng test case
    while (t--) {
        int n;
        scanf("%d", &n); // Nhập kích thước ma trận `n x n`
        int mang[n][n];
        input(*mang, n, n); // Gọi hàm input để nhập các phần tử cho ma trận `mang`

        // Duyệt qua từng hàng của ma trận
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { // Nếu là hàng chẵn (tính từ 0)
                for (int j = 0; j < n; j++) {
                    printf("%d ", mang[i][j]); // In từ trái sang phải
                }
            } else { // Nếu là hàng lẻ
                for (int j = n - 1; j >= 0; j--) {
                    printf("%d ", mang[i][j]); // In từ phải sang trái
                }
            }
        }
        printf("\n"); // Xuống dòng giữa các test case
    }
    return 0;
}
