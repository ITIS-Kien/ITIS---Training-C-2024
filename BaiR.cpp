#include <stdio.h>
#define ll long long // Định nghĩa `ll` là kiểu dữ liệu `long long`

// Hàm `swap` để hoán đổi hai số
void swap(ll &a, ll &b) {
    ll temp = a; // Lưu giá trị của `a` vào `temp`
    a = b;       // Gán giá trị của `b` cho `a`
    b = temp;    // Gán giá trị của `temp` cho `b`
}

// Hàm `tang` để sắp xếp mảng `a` theo thứ tự tăng dần
void tang(ll a[], ll n) {
    for (ll i = 0; i < n - 1; i++) { // Vòng lặp cho từng phần tử
        for (ll j = i + 1; j < n; j++) { // Vòng lặp kiểm tra các phần tử phía sau
            if (a[i] > a[j]) { // Nếu phần tử hiện tại lớn hơn phần tử tiếp theo
                swap(a[i], a[j]); // Hoán đổi chúng
            }
        }
    }
}

// Hàm `tongmin` để tính tổng hai số nhỏ nhất được tạo ra từ mảng
ll tongmin(ll a[], ll n) {
    tang(a, n); // Gọi hàm `tang` để sắp xếp mảng `a`
    ll min1 = 0, min2 = 0; // Khởi tạo hai biến để lưu hai số nhỏ nhất
    for (ll i = 0; i < n; i++) { // Duyệt qua mảng đã sắp xếp
        if (i % 2 == 0) { // Nếu chỉ số chẵn
            min1 = min1 * 10 + a[i]; // Thêm phần tử vào số `min1`
        } else { // Nếu chỉ số lẻ
            min2 = min2 * 10 + a[i]; // Thêm phần tử vào số `min2`
        }
    }
    return min1 + min2; // Trả về tổng của hai số nhỏ nhất
}

int main() {
    ll t; // Biến để lưu số lượng test case
    scanf("%lld", &t); // Nhập số lượng test case
    while (t--) { // Vòng lặp cho từng test case
        ll n; // Biến để lưu số lượng phần tử
        scanf("%lld", &n); // Nhập số lượng phần tử
        ll a[n + 5]; // Khai báo mảng `a` với kích thước `n + 5`
        for (ll i = 0; i < n; i++) { // Nhập giá trị cho mảng `a`
            scanf("%lld", &a[i]);
        }
        printf("%lld", tongmin(a, n)); // Gọi hàm `tongmin` và in kết quả
        printf("\n"); // Xuống dòng sau mỗi kết quả
    }
    return 0; // Kết thúc chương trình
}
