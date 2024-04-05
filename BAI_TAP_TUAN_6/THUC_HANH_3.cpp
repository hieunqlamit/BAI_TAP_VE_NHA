#include <bits/stdc++.h>
using namespace std;
void print(int n, int &m){
	cout << &n << endl << &m;
}
int main()
{
	int a; 
	cout << &a << endl;
	print(a, a);
}
// khi truyen bang gia tri thi doi so va tham tri la hai bien doc lap
// con khi truyen bang tham chieu thi doi so va tham bien la mot

