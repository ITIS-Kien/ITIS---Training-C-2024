#include <stdio.h>
#include <math.h>
#define ll long long // Định nghĩa kiểu dữ liệu ll là long long

int main() {
    int n;
    scanf("%d", &n); // Nhập giá trị n từ người dùng
    // Vòng lặp chạy từ ký tự 'A' + (n - 2) đến 'A' - 1
    for (int i = 'A' + n - 2; i >= 'A' - 1; i--) {
        // Vòng lặp in các ký tự từ i đến i + n - 1
        for (int j = i; j <= i + n - 1; j++) {
            printf("%c", (char)j); // In ký tự từ mã ASCII j
        }
        printf("\n"); // Xuống dòng sau khi in xong một hàng
        n--; // Giảm n sau mỗi lần lặp để giảm số ký tự in ra trong hàng tiếp theo
    }
    return 0;
}
