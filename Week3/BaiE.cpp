#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    scanf("%d", &n); // Nhập giá trị n từ người dùng
    // Vòng lặp chạy từ -n/2 đến n/2 để tạo chiều cao của hình
    for (i = -n / 2; i <= n / 2; i++) {
        // Kiểm tra nếu n là số chẵn và i là 0, thì bỏ qua hàng giữa
        if ((n % 2 == 0) && (i == 0)) continue;
        else {
            // Vòng lặp chạy từ n/2 đến -n/2 để tạo chiều rộng của hình
            for (j = n / 2; j >= -n / 2; j--) {
                // Kiểm tra nếu n là số chẵn và j là 0, thì bỏ qua cột giữa
                if ((n % 2 == 0) && (j == 0)) continue;
                else {
                    // Nếu giá trị tuyệt đối của i lớn hơn giá trị tuyệt đối của j, in khoảng trắng
                    if (abs(i) > abs(j)) printf(" ");
                    else printf("*"); // In dấu * nếu giá trị tuyệt đối của i nhỏ hơn hoặc bằng giá trị tuyệt đối của j
                }
            }
            // Nếu n là số lẻ hoặc i khác 0, in xuống dòng sau mỗi hàng
            if ((n % 2 != 0) || (i != 0)) printf("\n");
        }
    }
}
