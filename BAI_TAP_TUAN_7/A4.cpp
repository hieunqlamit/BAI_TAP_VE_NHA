#include <bits/stdc++.h>
using namespace std;
bool timkiem(int* a, int l, int r, int k){
	while (l <= r){
		int m = l/2 + r/2 ;
	if (a[m] == k){
		return true;
		}else if (a[m] < k){
			l = m +1;
		}else if (a[m] > k){
			r = m -1;
		}

	}
	return false;
			
}
int main()
{
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int k; cin >> k;
	if (timkiem(a, 0, n-1, k)){
		cout << "YES";
	}else {
		cout << "NO";
	}
}