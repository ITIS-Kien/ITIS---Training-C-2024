#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int m, n;
    scanf("%d%d", &m, &n);  // Nhập số hàng m và số cột n

    int a[m][n];  // Khởi tạo mảng 2 chiều kích thước m x n
    for (int i = 0; i < m; i++) {  // Vòng lặp để nhập phần tử của mảng
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);  // Nhập phần tử a[i][j]
        }
    }

    // In các phần tử ở viền của ma trận, các phần tử bên trong thay bằng khoảng trắng
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Kiểm tra nếu phần tử ở viền (hàng đầu tiên, hàng cuối, cột đầu tiên, cột cuối)
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                printf("%d ", a[i][j]);  // In phần tử viền
            } else {
                printf("  ");  // In khoảng trắng cho các phần tử không phải viền
            }
        }
        printf("\n");  // Xuống dòng sau mỗi hàng
    }

    return 0;
}
