#include<stdio.h>
#include<math.h>
#define ll long long
// Mảng `f` chứa các chữ số đầu tiên của các lũy thừa của 2 trong khoảng 2^1 đến 2^62
int f[] =  {1, 2, 4, 8, 1, 3, 6, 1, 2, 5,
            1, 2, 4, 8, 1, 3, 6, 1, 2, 5,
            1, 2, 4, 8, 1, 3, 6, 1, 2, 5,
            1, 2, 4, 8, 1, 3, 6, 1, 2, 5,
            1, 2, 4, 8, 1, 3, 7, 1, 2, 5,
            1, 2, 4, 9, 1, 3, 7, 1, 2, 5,
            1, 2, 4, 9, 1, 3, 7, 1, 2, 5};

// Hàm `main()` thực hiện chương trình chính
int main (){
    int a, b; // Khai báo hai biến `a` và `b` để lưu giá trị đầu vào
    scanf("%d%d", &a, &b); // Nhập hai số nguyên `a` và `b` từ bàn phím
    int check = 0; // Biến `check` để lưu trạng thái tìm thấy hay không

    // Vòng lặp kiểm tra từ `a + 1` đến `62`
    for (int i = a + 1; i < 63; i++) {
        if(b == f[i]) { // Nếu `b` là chữ số đầu tiên của lũy thừa `2^i`
            printf("%d", i); // In ra giá trị `i`
            check = 1; // Đặt `check = 1` báo hiệu tìm thấy kết quả
            break; // Thoát vòng lặp vì tìm thấy giá trị nhỏ nhất
        }
    }
    
    // Nếu không tìm thấy `b` là chữ số đầu của bất kỳ `2^i`, in ra `0`
    if(!check) printf("%d", check);

    return 0; // Kết thúc chương trình
}
