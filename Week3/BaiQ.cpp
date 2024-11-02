#include <stdio.h>
#include <math.h>

int cnt[100005] = {0}; // Khai báo mảng `cnt` để đếm số lần xuất hiện của mỗi số, khởi tạo tất cả giá trị là 0
int main() {
    int n; // Khai báo biến `n` để lưu số lượng phần tử
    scanf("%d", &n); // Nhập vào số lượng phần tử `n`
    int a[n + 5]; // Khai báo mảng `a` với kích thước `n + 5` để lưu các số nguyên
    // Nhập giá trị cho các phần tử trong mảng `a`
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        cnt[a[i]]++; // Tăng giá trị đếm cho số `a[i]`

    }
    // In ra số lần xuất hiện của mỗi số duy nhất
    for (int i = 0; i < n; i++) {
        if (cnt[a[i]] != 0) { // Nếu số `a[i]` chưa được in ra
            printf("So %d xuat hien %d lan\n", a[i], cnt[a[i]]); // In số và số lần xuất hiện của nó
            cnt[a[i]] = 0; // Đánh dấu là đã in để tránh in lại
        }
    }
    
    return 0; // Kết thúc chương trình
}
