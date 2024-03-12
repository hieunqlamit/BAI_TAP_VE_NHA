//Tương tự bài trên với dạng tam giác sau (với N bằng 5):
// 0   *
//  1 ***
// 2 *****
// *******
//*********
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = n - i - 1 ; j > 0; j--){
			cout << " ";
		}
		for (int j = 0 ; j < i*2 +1  ; j++){
			cout << "*";
		}
		cout << endl;
	}
}