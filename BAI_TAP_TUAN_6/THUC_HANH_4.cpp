#include <bits/stdc++.h>
using namespace std;
void passMang(int a[5]){
	for (int i = 0; i < 5; i++){
		cout << a[i] << ": " << &a[i] << endl;
	}
}
void passString(string a){
	cout << &a;
}
int main()
{
	int a[] = {1, 2, 3, 4 , 5};
	for (int i = 0; i < 5; i ++){
		cout << a[i] << ": " << &a[i] << endl;
	}
	cout << endl;
	passMang(a);
	cout << endl;
	string x = "anhyeuem";
	cout << &x << endl;
	passString(x);
}
// Khi truyền mảng thì ta truyền theo pass-by-reference
// Còn string được truyền theo cơ chế nào pass-by-value