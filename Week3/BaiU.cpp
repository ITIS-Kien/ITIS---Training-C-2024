#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    int T = 1; // Khởi tạo biến T để lưu số lượng test case
    scanf ("%d", &T); // Nhập số lượng test case
    while (T--) // Vòng lặp cho từng test case
    {
        int n, d = 0, f[10] = {}; // n: số lượng phần tử, d: biến kiểm tra kết quả, f: mảng lưu số lượng phần tử theo chữ số cuối
        scanf ("%d", &n); // Nhập số lượng phần tử

        // Nhập từng phần tử và tăng số lượng chữ số cuối tương ứng
        while (n--)
        {
            int x;
            scanf ("%d", &x);
            ++f[x % 10]; // Tăng số lượng của chữ số cuối
        }

        // Duyệt qua tất cả các bộ ba chữ số từ 0 đến 9
        for (int i = 0; i <= 9; ++i)
        {
            for (int j = 0; j <= 9; ++j)
            {
                for (int k = 0; k <= 9; ++k)
                {
                    // Kiểm tra nếu tổng của ba số có chữ số cuối là 8
                    if ((i + j + k) % 10 == 8)
                    {
                        // Giảm số lượng cho từng chữ số
                        --f[i], --f[j], --f[k];
                        // Kiểm tra nếu số lượng sau khi giảm vẫn không âm
                        if (f[i] >= 0 && f[j] >= 0 && f[k] >= 0)
                        {
                            d = 1; // Đã tìm thấy bộ ba may mắn
                            printf ("YeS\n"); // In ra "YeS"
                            break; // Thoát khỏi vòng lặp
                        }
                        // Trở lại số lượng ban đầu nếu không tìm thấy bộ ba
                        ++f[i], ++f[j], ++f[k];
                    }
                }
                if (d) break; // Nếu tìm thấy, thoát khỏi vòng lặp j
            }
            if (d) break; // Nếu tìm thấy, thoát khỏi vòng lặp i
        }
        // Nếu không tìm thấy bộ ba nào, in ra "No"
        if (!d) printf ("No\n");
    }
}
