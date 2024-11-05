#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n); // Nhập số nguyên n từ người dùng
    // Vòng lặp để in từng hàng, từ 1 đến 2*n - 1
    for (int i = 1; i <= 2 * n - 1; i++) {
        // Vòng lặp để in từng cột trong hàng hiện tại
        for (int j = 1; j <= 2 * n - 1; j++) {
            // Kiểm tra khoảng cách từ vị trí (i, j) đến tâm hình vuông
            if (abs(n - i) > abs(n - j)) {
                printf("%d", abs(n - i) + 1); // In giá trị dựa trên khoảng cách từ i đến tâm
            } 
            else {
                printf("%d", abs(n - j) + 1); // In giá trị dựa trên khoảng cách từ j đến tâm
            }
        }
        printf("\n"); // Xuống dòng sau khi hoàn thành mỗi hàng
    }
}
