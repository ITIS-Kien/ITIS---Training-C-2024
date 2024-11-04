#include <stdio.h>
#include <math.h>

#define ll long long // Định nghĩa `ll` là kiểu `long long` để dùng cho biến có phạm vi lớn

// Hàm `input` để nhập các phần tử của ma trận `row x col`
void input(int *arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", (arr + i * col + j)); // Nhập từng phần tử vào ma trận 1D bằng cách dùng con trỏ
        }
    }
}

int main() {
    int mang[3][3]; // Khai báo ma trận `mang` kích thước 3 x 3
    input(*mang, 3, 3); // Gọi hàm `input` để nhập các phần tử cho ma trận `mang`

    // Tính định thức của ma trận 3x3 sử dụng công thức:
    // det = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1]
    //     - a[0][2] * a[1][1] * a[2][0] - a[0][1] * a[1][0] * a[2][2] - a[0][0] * a[1][2] * a[2][1]
    ll det = (ll)mang[0][0] * mang[1][1] * mang[2][2] +
             (ll)mang[0][1] * mang[1][2] * mang[2][0] +
             (ll)mang[0][2] * mang[1][0] * mang[2][1] -
             (ll)mang[0][2] * mang[1][1] * mang[2][0] -
             (ll)mang[0][1] * mang[1][0] * mang[2][2] -
             (ll)mang[0][0] * mang[1][2] * mang[2][1];

    printf("%lld", det); // In kết quả định thức của ma trận

    return 0;
}
