#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10];
	char b[10];
	for (int i = 0; i < 3; i++){
		cout << &a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 3; i++){
		cout << (void *) &b[i] << " ";
}
}
// địa chỉ của các phần tử trong mảng int liên tiếp sẽ cách nhau 4 byte còn các phần tử trong mảng char liên tiếp 
// sẽ cách nhau 1 byte thôi.