#include <stdio.h>

// Hàm ve(int n) dùng để vẽ ma trận xoắn ốc kích thước n x n
void ve(int n) {
    int top = 0, bot = n - 1, left = 0, right = n - 1; // Khởi tạo các biên của ma trận
    int matrix[n][n], value = 1; // Khởi tạo ma trận `matrix` và biến `value` bắt đầu từ 1

    // Vòng lặp để điền các giá trị vào ma trận theo dạng xoắn ốc
    while (top <= bot && left <= right) {
        // Điền từ trái sang phải trên hàng trên cùng
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++; // Giảm chiều cao phần chưa điền ở trên

        // Điền từ trên xuống dưới ở cột bên phải
        for (int i = top; i <= bot; i++) {
            matrix[i][right] = value++;
        }
        right--; // Giảm chiều rộng phần chưa điền bên phải

        // Điền từ phải sang trái ở hàng dưới cùng
        for (int i = right; i >= left; i--) {
            matrix[bot][i] = value++;
        }
        bot--; // Giảm chiều cao phần chưa điền bên dưới

        // Điền từ dưới lên trên ở cột bên trái
        for (int i = bot; i >= top; i--) {
            matrix[i][left] = value++;
        }
        left++; // Giảm chiều rộng phần chưa điền bên trái
    }

    // In ra ma trận xoắn ốc
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int t; 
    scanf("%d", &t); // Nhập số lượng test case

    // Duyệt qua từng test case
    for (int test_case = 1; test_case <= t; test_case++) {
        int n;
        scanf("%d", &n); // Nhập kích thước của ma trận cho từng test case

        printf("Test %d:\n", test_case);
        ve(n); // Gọi hàm ve để vẽ ma trận xoắn ốc với kích thước `n`
    }
}
