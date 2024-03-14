#include <bits/stdc++.h>
using namespace std;
bool check(int n){
	string s = to_string(n);
	string tmp = "";
	for (int i = s.size()-1; i >= 0; i--){
		tmp += s[i];
	}
	if (tmp == s) return true;
	else return false;
}
int main()
{
	int TC; cin >> TC;
	while (TC--){
		int x, y;
		int count = 0;
		cin >> x >> y;
		for(int i = x; i <= y; i++){
			if (check(i)){
				count++;
			}
		}
		cout << count << endl;
		
	}
}