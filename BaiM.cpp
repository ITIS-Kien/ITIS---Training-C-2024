#include <stdio.h>

// Hàm `print_ITIS` để in chữ "ITIS" với kích thước `n`
void print_ITIS(int n) {
    for (int i = 0; i < n; i++) { // Vòng lặp cho từng hàng
        // In dấu "*" đầu tiên
        printf("*");
        printf(" ");
        
        // In phần chữ "I"
        if (i == 0) { // Hàng đầu tiên
            for (int j = 0; j < n; j++) printf("*"); // In toàn bộ dấu "*"
        } else { // Các hàng còn lại
            for (int j = 0; j < n; j++) {
                if (j == n / 2) printf("*"); // In "*" ở giữa
                else printf(" "); // In khoảng trắng
            }
        }
        printf(" "); // Khoảng trắng giữa chữ "I" và "T"
        
        // In dấu "*" cho chữ "T"
        printf("*");
        printf(" ");
        
        // In phần chữ "T"
        if (i == 0 || i == n / 2 || i == n - 1) { // Hàng đầu, giữa và cuối
            printf(" ");
            for (int j = 1; j < n-1; j++) printf("*"); // In dấu "*" cho phần ngang
        } else if (i < n / 2) { // Các hàng trên giữa
            printf("*"); // In "*" đầu dòng
            for (int j = 1; j < n-1; j++) printf(" "); // In khoảng trắng
            if(i == 1) printf("*"); // In "*" ở hàng thứ hai
        } else { // Các hàng dưới giữa
            if(i == n-2) { // Hàng thứ hai từ dưới lên
                printf("*"); // In "*" đầu dòng
                for (int j = 1; j < n - 1; j++) printf(" "); // In khoảng trắng
            } else {
                for (int j = 0; j < n - 1; j++) printf(" "); // Chỉ in khoảng trắng
            }
            printf("*"); // In "*" cuối dòng
        }
        printf("\n"); // Chuyển xuống dòng mới
    }
}

int main() {
    int n; // Khai báo biến `n` để nhận kích thước từ người dùng
    scanf("%d", &n); // Nhập vào kích thước `n`
    print_ITIS(n); // Gọi hàm để in chữ "ITIS"
    return 0; // Kết thúc chương trình
}
