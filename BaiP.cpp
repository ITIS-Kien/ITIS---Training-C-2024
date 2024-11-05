#include<stdio.h>

// Khai báo mảng `a` với kích thước tối đa là 10005
int a[10005];

// Hàm `sapxep` để sắp xếp mảng `a` với kích thước `n`
void sapxep(int n) {
    // Sử dụng thuật toán sắp xếp nổi bọt (Bubble Sort)
    for (int i = 1; i < n; ++i) { // Vòng lặp cho từng phần tử trong mảng
        for (int j = i + 1; j <= n; ++j) { // Vòng lặp kiểm tra các phần tử phía sau
            if (a[i] > a[j]) { // Nếu phần tử hiện tại lớn hơn phần tử tiếp theo
                // Hoán đổi các phần tử
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}

int main() {
    int n; // Khai báo biến `n` để lưu số lượng phần tử
    scanf("%d", &n); // Nhập vào số lượng phần tử `n`
    
    // Nhập giá trị cho các phần tử trong mảng `a`
    for (int i = 1; i <= n; ++i) 
        scanf("%d", &a[i]);
    
    sapxep(n); // Gọi hàm `sapxep` để sắp xếp mảng
    
    // In ra mảng đã sắp xếp
    for (int i = 1; i <= n; ++i) 
        printf("%d ", a[i]);
        
    return 0; // Kết thúc chương trình
}
