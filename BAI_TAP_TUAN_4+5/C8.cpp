#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N; cin >> N;
	int a[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	long sum = 0;
	sort (a, a+N);
	for (int i = 0; i < N-1; i++){
		for (int j = i+1; j < N; j++){
			sum += a[i];
		}
	}
	cout << sum;
}