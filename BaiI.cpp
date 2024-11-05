#include <stdio.h>

// Hàm tính ước chung lớn nhất (GCD) sử dụng đệ quy
long long gcd(long long a, long long b) {
    if (!b) return a; // Nếu b bằng 0, trả về a
    return gcd(b, a % b); // Đệ quy để tìm GCD
}

int main() {
    long long a, b; // Khai báo các biến a và b
    int t; // Số lượng bộ test
    scanf("%d", &t); // Nhập số lượng bộ test
    while (t--) { // Lặp qua từng bộ test
        scanf("%lld%lld", &a, &b); // Nhập hai số a và b
        long long UCLN = gcd(a, b); // Tính GCD của a và b
        // In ra GCD và Bội chung nhỏ nhất (LCM) được tính từ a, b và GCD
        printf("%lld %lld\n", UCLN, a * b / UCLN); 
    }
    return 0; // Kết thúc chương trình
}
