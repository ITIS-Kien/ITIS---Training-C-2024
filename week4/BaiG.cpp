#include <stdio.h>
#include <math.h>
#define ll long long // Định nghĩa kiểu `ll` là `long long` để sử dụng cho các biến có phạm vi lớn

int main() {
    int m, n;
    scanf("%d%d", &m, &n); // Nhập số hàng `m` và số cột `n` của ma trận
    
    int a[m][n], b[m] = {}, c[n] = {}; // Khởi tạo ma trận `a[m][n]` và hai mảng `b[m]`, `c[n]`
    // `b[m]` để lưu tổng từng hàng, `c[n]` để lưu tổng từng cột

    // Nhập các phần tử của ma trận và tính tổng các phần tử của từng hàng và cột
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]); // Nhập phần tử a[i][j]
            b[i] += a[i][j]; // Cộng phần tử vào tổng hàng `i`
            c[j] += a[i][j]; // Cộng phần tử vào tổng cột `j`
        }
    }

    // Tìm tổng lớn nhất trong các hàng
    int maxcol = b[0];
    for (int i = 0; i < m; i++) {
        if (b[i] > maxcol) {
            maxcol = b[i]; // Cập nhật `maxcol` nếu tìm thấy tổng hàng lớn hơn
        }
    }

    // Tìm tổng lớn nhất trong các cột
    int maxrow = c[0];
    for (int i = 0; i < n; i++) {
        if (c[i] > maxrow) {
            maxrow = c[i]; // Cập nhật `maxrow` nếu tìm thấy tổng cột lớn hơn
        }
    }

    // In ra tổng lớn nhất của các hàng và tổng lớn nhất của các cột
    printf("%d %d", maxcol, maxrow);

    return 0;
}
