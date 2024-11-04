#include <stdio.h>

int t, n, a[105][105];
int maxRow, maxColumn, sumAll;

int main()
{
    scanf("%d", &t); // Nhập số lượng test case
    while(t--)
    {
        sumAll = 0;
        int pqRow[105] = {0}, pqColumn[105] = {0}; // Khởi tạo mảng để lưu tổng hàng và tổng cột
        scanf("%d", &n); // Nhập kích thước của ma trận
        
        // Tính tổng của các hàng
        for(int i = 1; i <= n; i++)
        {
            int sum = 0;
            for(int j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]); // Nhập từng phần tử của ma trận
                sum += a[i][j];        // Cộng giá trị vào tổng hàng
            }
            pqRow[i] = sum;            // Lưu tổng hàng vào mảng pqRow
        }
        
        // Tính tổng của các cột
        for(int i = 1; i <= n; i++)
        {
            int sum = 0;
            for(int j = 1; j <= n; j++) 
                sum += a[j][i]; // Tính tổng cho từng cột
            pqColumn[i] = sum;           // Lưu tổng cột vào mảng pqColumn
        }
        
        // Tìm tổng hàng lớn nhất và tổng cột lớn nhất
        maxRow = pqRow[1];
        maxColumn = pqColumn[1];
        
        for(int i = 2; i <= n; i++)
        {
            if(pqRow[i] > maxRow) maxRow = pqRow[i];       // Cập nhật tổng hàng lớn nhất
            if(pqColumn[i] > maxColumn) maxColumn = pqColumn[i]; // Cập nhật tổng cột lớn nhất
        }
        
        // Tính tổng tất cả các phần tử trong ma trận
        for(int i = 1; i <= n; i++)
        {
            sumAll += pqRow[i];
        }
        
        // In ra kết quả
        printf("%d\n", maxRow > maxColumn ? maxRow * n - sumAll : maxColumn * n - sumAll);
    }
    return 0;
}
