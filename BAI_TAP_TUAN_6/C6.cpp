#include <bits/stdc++.h>
using namespace std;
int UCLN (int a, int b){
	if (b == 0){
		return a;
	}
	return (b, a % b);
}
int main(){
	int a, b; cin >> a >> b;
	if (a > b ) cout <<  UCLN(a, b);
	else {
		cout << UCLN (b, a);
	}
}