#include <stdio.h>

int main()
{
    // Khai báo các biến
    int n, m, q;
    scanf("%d%d", &n, &m);  // Nhập kích thước của ma trận: n hàng, m cột

    // Khởi tạo hai ma trận a và b có kích thước (n+1)x(m+1) để lưu dữ liệu và ma trận tích lũy
    long long a[n + 1][m + 1], b[n + 1][m + 1] = {};

    // Duyệt qua từng phần tử của ma trận a
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            scanf("%lld", &a[i][j]);      // Nhập phần tử a[i][j]
            a[i][j] *= (i * j);           // Nhân phần tử với tích của chỉ số hàng và cột

            // Tính ma trận tích lũy b[i][j] từ a[i][j] với công thức
            b[i][j] = a[i][j] + b[i][j - 1] + b[i - 1][j] - b[i - 1][j - 1];
        }
    }
    
    // Đọc số lượng truy vấn
    scanf("%d", &q);

    // Khởi tạo mảng c để lưu kết quả của mỗi truy vấn
    long long c[q + 1];
    
    // Duyệt qua từng truy vấn
    for(int i = 1; i <= q; i++) {
        int x, y, z, t;
        scanf("%d%d%d%d", &x, &y, &z, &t);  // Nhập các toạ độ của vùng cần tính tổng

        // Tính tổng từ (x, y) đến (z, t) trong ma trận tích lũy b
        c[i] = b[z][t] - b[x - 1][t] - b[z][y - 1] + b[x - 1][y - 1];
    }
    
    // Xuất kết quả cho từng truy vấn
    for(int i = 1; i <= q; i++) {
        printf("%lld\n", c[i]); 
    }

    return 0;
}
