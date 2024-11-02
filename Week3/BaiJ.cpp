#include <stdio.h>
#include <math.h> // Thư viện toán học để sử dụng hàm sqrt()

int main() {
    long long n; // Khai báo biến n kiểu long long để chứa số nhập vào
    scanf("%lld", &n); // Nhập số nguyên dương n
    // Duyệt từ 2 đến căn bậc hai của n để tìm các ước số
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) { // Kiểm tra nếu i là ước số của n
            long long a = 0; // Biến để đếm số lần xuất hiện của ước số i
            // Duyệt để chia n cho i cho đến khi không còn chia hết nữa
            while (n % i == 0) {
                ++a; // Tăng biến đếm
                n /= i; // Chia n cho i
            }
            // In ra ước số i và số lần xuất hiện của nó
            printf("%lld^%lld", i, a);
            if (n != 1) // Nếu n chưa trở thành 1, tiếp tục in dấu "*"
                printf(" * ");
        }
    }
    // Nếu n lớn hơn 1, tức là n là một số nguyên tố
    if (n != 1) 
        printf("%lld^1", n); // In ra n như là một ước số
    return 0; // Kết thúc chương trình
}
