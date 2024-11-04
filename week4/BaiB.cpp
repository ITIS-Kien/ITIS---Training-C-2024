#include<stdio.h>
#include<math.h>
#define ll long long

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    
    int a[m][n], b[m][n];

    // Nhập ma trận A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Nhập ma trận B và cộng trực tiếp vào ma trận A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
            a[i][j] += b[i][j];  // Thực hiện phép cộng phần tử
        }
    }

    // In ra ma trận kết quả (ma trận A đã được cộng với B)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
