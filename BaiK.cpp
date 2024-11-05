#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Hàm kiểm tra số nguyên tố
int nt(int x) {
    if (x < 2) return 0; // Số nhỏ hơn 2 không phải là số nguyên tố
    if (x <= 3) return 1; // 2 và 3 là số nguyên tố
    if (x % 2 == 0 || x % 3 == 0) return 0; // Loại bỏ số chẵn và số chia hết cho 3

    // Duyệt từ 5 đến căn bậc hai của x, kiểm tra các ước số
    for (int i = 5; i * i <= x; i += 6)
        if (x % i == 0 || x % (i + 2) == 0) // Kiểm tra ước số i và i+2
            return 0; // Nếu có ước số, x không phải là số nguyên tố
    return 1; // Nếu không có ước số nào, x là số nguyên tố
}

// Hàm kiểm tra số có chữ số là các số nguyên tố (2, 3, 5, 7) và tổng các chữ số là số nguyên tố
int cs(int n) {
    int tong = 0; // Biến để lưu tổng các chữ số
    while (n > 0) {
        int so = n % 10; // Lấy chữ số cuối
        if (so != 2 && so != 3 && so != 5 && so != 7) return 0; // Kiểm tra chữ số có phải là số nguyên tố không
        n /= 10; // Loại bỏ chữ số đã kiểm tra
        tong += so; // Cộng dồn vào tổng
    }
    return nt(tong) ? 1 : 0; // Kiểm tra xem tổng các chữ số có phải là số nguyên tố không
}

int main() {
    int t; // Biến lưu số lượng test case
    scanf("%d", &t); // Nhập số lượng test case
    while (t--) { // Lặp qua từng test case
        int a; // Biến lưu số a
        scanf("%d", &a); // Nhập số a
        // Kiểm tra điều kiện và in ra kết quả
        if (cs(a) && nt(a)) 
            printf("YES\n"); // Nếu a thỏa mãn cả hai điều kiện
        else 
            printf("NO\n"); // Nếu không
    }
    return 0; // Kết thúc chương trình
}
