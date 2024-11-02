#include <stdio.h>

// Hàm để tìm giá trị lớn hơn giữa hai số
int max(int a, int b) {
    return (a > b) ? a : b; // Trả về giá trị lớn hơn
}

// Hàm để tìm giá trị nhỏ hơn giữa hai số
int min(int a, int b) {
    return (a < b) ? a : b; // Trả về giá trị nhỏ hơn
}

int main() { // Hàm chính
    int n, k; // Khai báo số lượng phần tử và số lần biến đổi
    scanf("%lld %lld", &n, &k); // Nhập n và k
    int a[n]; // Khai báo mảng a có kích thước n

    // Nhập các phần tử của mảng a
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
    }

    // Khởi tạo giá trị lớn nhất và nhỏ nhất với phần tử đầu tiên
    int maxe = a[0], mine = a[0];
    
    // Tìm giá trị lớn nhất và nhỏ nhất trong mảng
    for (int i = 0; i < n; ++i) {
        mine = min(mine, a[i]); // Cập nhật giá trị nhỏ nhất
        maxe = max(maxe, a[i]); // Cập nhật giá trị lớn nhất
    }

    // Nếu k = 0, in ra các phần tử của mảng a mà không thay đổi
    if (k == 0) {
        for (int i = 0; i < n; ++i) {
            printf("%lld ", a[i]);
        }
    }
    // Nếu k là số chẵn, in ra giá trị của mỗi phần tử sau khi trừ đi giá trị nhỏ nhất
    else if (k % 2 == 0) {
        for (int i = 0; i < n; ++i) {
            printf("%lld ", a[i] - mine);
        }
    }
    // Nếu k là số lẻ, in ra giá trị của phần tử lớn nhất trừ đi mỗi phần tử
    else {
        for (int i = 0; i < n; ++i) {
            printf("%lld ", maxe - a[i]);
        }
    }
    
    return 0; // Kết thúc chương trình
}
