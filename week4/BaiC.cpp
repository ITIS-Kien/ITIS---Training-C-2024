#include<stdio.h>
#include<math.h>
#define ll long long

int main() {
    int m, n, p;
    scanf("%d%d%d", &m, &n, &p);
    
    int a[m][n], b[n][p];
    ll c[m][p] = {}; // Khởi tạo ma trận kết quả với tất cả phần tử bằng 0

    // Nhập ma trận A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Nhập ma trận B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Tính tích của hai ma trận A và B, lưu vào ma trận C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += (ll)a[i][k] * b[k][j];
            }
        }
    }

    // In ra ma trận kết quả C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
