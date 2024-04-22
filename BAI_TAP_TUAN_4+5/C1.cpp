#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N; cin >> N;
	set <int> st;
	int a[N];
	for (int i = 0; i < N; i++){
		cin >> a[i];
		st.insert(a[i]);
	}
	if (st.size() < N){
		cout << "YES";
	}else {
		cout << "NO";
	}
}