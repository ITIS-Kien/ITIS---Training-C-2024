#include<stdio.h>
#include<math.h>
// Số có 3 ước là bình phương của các số nguyên tố
// Hàm `prime` kiểm tra xem số nguyên `n` có phải là số nguyên tố hay không
int prime(int n) {
    int sqr = sqrt(n); // Tính căn bậc hai của `n`
    if (n == 0 || n == 1) return 0; // 0 và 1 không phải là số nguyên tố
    if (n == 2 || n == 3) return 1; // 2 và 3 là số nguyên tố
    if (n % 2 == 0 || n % 3 == 0) return 0; // Loại bỏ các số chẵn và chia hết cho 3
    // Kiểm tra các số từ 5 đến căn bậc hai của `n`
    for (int i = 5; i <= sqr; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0; // Nếu có ước số khác thì không phải số nguyên tố
    }
    return 1; // Nếu không có ước số nào, `n` là số nguyên tố
}

int main() {
    int n, a;
    scanf("%d", &n); // Nhập vào số nguyên `n`
    a = sqrt(n); // Tính căn bậc hai của `n`

    // Vòng lặp từ 2 đến căn bậc hai của `n`
    for (int i = 2; i <= a; i++) {
        if (prime(i)) // Nếu `i` là số nguyên tố
            printf("%lld ", (long long) i * i); // In bình phương của số nguyên tố
    }
    
    return 0; // Kết thúc chương trình
}
