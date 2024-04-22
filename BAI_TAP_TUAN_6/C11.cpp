#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	vector <int> number;
	while (n != 0){
		int x; 
		x = n % 2;
		number.push_back(x);
		n /= 2;
	}
	reverse (number.begin(), number.end());
	for (auto i : number){
		cout << i;
	}
}