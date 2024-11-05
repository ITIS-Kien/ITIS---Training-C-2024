#include <stdio.h>
#define MAX 1000000 // Định nghĩa hằng số MAX là 1000000
long long a[MAX + 1];  // Khai báo mảng `a` để lưu trữ các số nguyên dài, kích thước là MAX + 1
long long prefix_sum[MAX + 1]; // Khai báo mảng `prefix_sum` để lưu trữ tổng cộng dồn

int main() {
    long long n, q; // Khai báo các biến để lưu số lượng phần tử và số lượng truy vấn
    scanf("%lld %lld", &n, &q); // Nhập số lượng phần tử `n` và số lượng truy vấn `q`
    // Nhập các phần tử vào mảng `a`
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    // Tính tổng cộng dồn cho mảng `a`
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i - 1]; // Tính tổng từ đầu đến vị trí `i`
    }
    // Xử lý các truy vấn
    for (int i = 0; i < q; i++) {
        int l, r; // Khai báo biến để lưu chỉ số trái và phải của truy vấn
        scanf("%d %d", &l, &r); // Nhập chỉ số trái và phải
        long long total = prefix_sum[r] - prefix_sum[l - 1]; // Tính tổng từ `l` đến `r`
        printf("%lld\n", total); // In ra tổng
    }
    return 0; // Kết thúc chương trình
}
