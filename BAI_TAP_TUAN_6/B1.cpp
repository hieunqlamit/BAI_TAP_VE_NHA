#include <bits/stdc++.h>
using namespace std;
bool majority(bool a, bool b, bool c){
	int x = a + b + c;
	return (x>= 2);
}
int main()
{
	bool a, b, c;
	cin >> a >> b >> c;
	cout << majority(a, b, c);
}