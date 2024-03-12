//Viết chương trình nhập một số nguyên dương N và in ra một tam giác kích thước N. Chẳng hạn với N bằng 5 thì tam giác có dạng như sau:
//*****
// ****
//  ***
//   **
//    *
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			cout << " ";
		}
		for (int j = n-i; j >= 1; j--){
			cout << "*";
		}
		cout << endl;
	}
}
