#include<stdio.h>
#include<math.h>
#define ll long long

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n][n];
    int sum = 0;  // Biến lưu tổng các phần tử phía trên đường chéo chính

    // Nhập các phần tử của ma trận và xử lý
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (i < j) 
                sum += a[i][j];  // Cộng phần tử trên đường chéo chính vào tổng
            else if (i > j) 
                a[i][j] = 0;  // Đặt các phần tử dưới đường chéo chính về 0
        }
    }

    // In ra tổng của các phần tử phía trên đường chéo chính
    printf("%d\n", sum);

    // In ma trận sau khi biến đổi
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
