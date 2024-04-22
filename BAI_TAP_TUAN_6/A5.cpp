#include <bits/stdc++.h>
using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   cout << &y << endl;
}
int main()
{
   f(7);
   g(11);
   return 0;
} 
// Địa chỉ của hai biến này như nhau vì khi hàm f được gọi x sẽ có một địa chỉ trong bộ nhớ, khi 
// f kết thúc thì x bị hủy và khi g được gọi thì biến y được tạo ra và nó sẽ sử dụng không gian bộ nhớ trống đã được 
// sử dụng trước đó của biến x nên 2 biến này có địa chỉ bằng nhau.