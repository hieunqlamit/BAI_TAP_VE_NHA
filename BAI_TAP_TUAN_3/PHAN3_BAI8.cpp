#include <bits/stdc++.h>
using namespace std;
struct Point{
	int x;
	int y;
}
int main()
{
	Point p;
	cout << &p << endl << &(p.x) << endl << &(p.y);
}
// Trường hợp này có thể xảy ra nếu trình biên dịch không 
//cần phải cấp phát một vùng nhớ mới cho trường dữ liệu x 
//và x được lưu trữ ngay tại địa chỉ bắt đầu của biến p. 
//Trong khi đó, trường dữ liệu y có thể được lưu tại một vị 
//trí bộ nhớ khác.