#include <bits/stdc++.h>
using namespace std;
int kiemtra(int k, int n){
	if (k > n || n > 20 ){
		return 0;
	}
	else {
		if ( k == 0 || n == 1){
			return 1;
		}
		// to hop chap k củua n = to hop chap k cua n-1 va to hop chap k-1 cua n-1
		return kiemtra(k, n-1) + kiemtra(k-1, n-1);
		
	}
}
int main()
{
	while (true){
		int k, n; cin >> k >> n;
		if (n == -1 && k == -1){
			break;
		}
		cout << kiemtra(k, n) << endl;
	}
}