#include <bits/stdc++.h>
using namespace std;
void f(int x, double y) {
   cout << "f(int, double)";
}

void f(double x, int y) {
   cout << "f(double, int)";
}
int main()
{
	f(1, 2);
}
// Hàm bị lỗi vì yêu cầu 1 trong 2 số truyền vào phải là kiểu double