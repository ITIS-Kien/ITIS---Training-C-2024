#include<stdio.h>
#define ll long long

ll fibo[100];//Khởi tạo mảng lưu số Fibonacci
void Fibo(){//Hàm khai báo gia trị cho mảng
    fibo[0] = fibo[1] = 1;//2 giá trị đầu là 1
    for (int i = 2; i < 93; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];// cái này thôi không cần giải thích nhé
    }
}
bool check(ll n){//hàm để kiểm tra n là số fibonacci không
    for (int i = 0; i < 93; i++)//Duyệt các phần tử trong mảng fibo
    {
        if(fibo[i] == n) return true; //nếu n bằng phần tử nào đó trong mảng thì ngay lập tức trả về true 
    }// và kết thúc hàm
    return false; // còn nếu duyệt hết mảng mà không tìm được phần tử nào thì trả về false
}
int main() {
	int t;
	scanf ("%d", &t);
    Fibo(); // Bắt buộc gọi hàm để mảng fibo được gán giá trị
	while (t--) {
		ll n;
		scanf("%lld", &n);
		if (check(n)) printf("Yes\n");
		else printf("No\n");
	}
}