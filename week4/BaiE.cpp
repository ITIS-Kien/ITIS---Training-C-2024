#include<stdio.h>
#include<math.h>
#define ll long long

int main() {
    int m, n;
    scanf("%d%d", &m, &n); // Nhập số hàng m và số cột n của ma trận gốc

    int a[m][n], at[n][m]; // Khai báo ma trận gốc a[m][n] và ma trận chuyển vị at[n][m]

    // Nhập các phần tử của ma trận gốc A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]); // Nhập từng phần tử a[i][j] của ma trận gốc
        }
    }

    // Tạo ma trận chuyển vị A^T
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            at[i][j] = a[j][i]; // Gán phần tử a[j][i] của ma trận gốc vào at[i][j] trong ma trận chuyển vị
        }
    }

    // In ra ma trận chuyển vị A^T
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", at[i][j]); // In từng phần tử của ma trận chuyển vị
        }
        printf("\n"); // Xuống dòng sau mỗi hàng của ma trận chuyển vị
    }

    return 0;
}
