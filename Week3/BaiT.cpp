#include <stdio.h>

// Hàm tính GCD (ước số chung lớn nhất) của hai số nguyên a và b
int gcd(int a, int b) {
    while (b != 0) { // Vòng lặp cho đến khi b bằng 0
        int t = b;  // Lưu giá trị của b vào t
        b = a % b;  // Tính phần dư của a chia cho b
        a = t;      // Cập nhật a bằng giá trị của b
    }
    return a; // Trả về giá trị GCD
}

int main() {
    int t; // Biến để lưu số lượng test case
    scanf("%d", &t); // Nhập số lượng test case
    
    while (t--) { // Vòng lặp cho từng test case
        int n; // Biến để lưu số lượng phần tử
        scanf("%d", &n); // Nhập số lượng phần tử
        int a[n + 1]; // Khai báo mảng `a` với kích thước n + 1
        for (int i = 1; i <= n; i++) { // Nhập từng phần tử vào mảng `a`
            scanf("%d", &a[i]);
        }

        int p[1001] = {0}; // Khai báo mảng `p` để lưu chỉ số của các phần tử
        for (int i = 1; i <= n; i++) { // Ghi lại chỉ số của các phần tử trong `p`
            p[a[i]] = i; // Lưu chỉ số phần tử a[i] vào p[a[i]]
        }

        int res = -1; // Khởi tạo biến `res` để lưu kết quả
        for (int i = 1; i <= 1000; i++) { // Duyệt qua các số từ 1 đến 1000
            if (p[i] == 0) continue; // Nếu số i không có trong mảng, bỏ qua
            for (int j = i + 1; j <= 1000; j++) { // Duyệt qua các số j > i
                if (p[j] != 0 && gcd(i, j) == 1) { // Kiểm tra điều kiện GCD(i, j) == 1
                    res = res > (p[i] + p[j]) ? res : (p[i] + p[j]); // Cập nhật kết quả
                }
            }
        }
        printf("%d\n", res); // In ra kết quả
    }
    return 0; // Kết thúc chương trình
}
