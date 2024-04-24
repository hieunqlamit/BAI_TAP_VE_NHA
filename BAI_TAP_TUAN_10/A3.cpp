#include <bits/stdc++.h>
using namespace std;
int main()
{
	char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c; // Dòng này cố gắng giải phóng bộ nhớ mà c trỏ tới. Tuy nhiên, c trỏ đến một vị trí bộ nhớ bên trong mảng được cấp phát động a, không phải là một đối tượng được cấp phát động riêng biệt. Do đó, việc sử dụng delete trên c dẫn đến hành vi không xác định.
cerr << "a after deleting c:" << "-" << a << "-" << endl;

}