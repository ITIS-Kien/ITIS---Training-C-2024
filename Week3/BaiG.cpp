#include <stdio.h>

int main() {
    int n;
    // Đọc giá trị n từ đầu vào cho đến khi gặp EOF
    while (scanf("%d", &n) != EOF) {
        // Kiểm tra nếu n nhỏ hơn 3, in ra -1 và xuống dòng (không thể tạo hình khi n < 3)
        if (n < 3) {
            printf("-1\n");
        } else {
            // In phần trên của chữ K
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n - i; j++) {
                    // Nếu là cạnh bên trái (j == 0) hoặc cạnh chéo chính (i + j == n - 1), in 'T'
                    if (i + j == n - 1 || j == 0) {
                        printf("T");
                    } else {
                        printf(" "); // Các vị trí khác in khoảng trắng
                    }
                }
                printf("\n"); // Xuống dòng sau mỗi hàng
            }
            // In phần dưới của chữ K
            for (int i = 1; i < n; i++) {
                for (int j = 0; j <= i; j++) {
                    // Nếu là cạnh chéo (i == j) hoặc cạnh trái (j == 0), in 'T'
                    if (i == j || j == 0) {
                        printf("T");
                    } else {
                        printf(" "); // Các vị trí khác in khoảng trắng
                    }
                }
                printf("\n"); // Xuống dòng sau mỗi hàng
            }
        }
        // Dòng trống giữa các chữ K khi có nhiều lần nhập
        printf("\n");
    }
    return 0;
}
