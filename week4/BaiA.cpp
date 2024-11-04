#include<stdio.h>
#include<math.h>
#define ll long long

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n][n];
    int sum = 0;  // Biến lưu tổng các phần tử của ma trận

    // Nhập các phần tử của ma trận và tính tổng
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];  // Cộng từng phần tử vào tổng
        }
    }

    // In ra tổng của tất cả các phần tử trong ma trận
    printf("%d", sum);

    return 0;
}
