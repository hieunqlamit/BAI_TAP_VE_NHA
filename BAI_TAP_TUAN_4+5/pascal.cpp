#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	vector <int> a[n];
	int size = 1;
    for (int i = 0; i < n; i++){
    	a[i].resize(size);
    	size++;
    	
    	a[i][0] = 1;
    	a[i][a[i].size()-1] = 1;
    	for (int j = 1; j < a[i].size()-1; j++){
    		a[i][j] += a[i-1][j] + a[i-1][j-1];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < a[i].size(); j++){
			cout << setw(3) << a[i][j] ;
		}
		cout << endl;
	}
	
}