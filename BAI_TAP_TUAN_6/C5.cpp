#include <bits/stdc++.h>
using namespace std;
bool nguyento(int n){
	if (n == 1 ){
		return false;
	}
	if (n == 3|| n == 2){
		return true;
	}
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
void innguyento(int n){
	if (nguyento(n)){
		cout << n;
	}
	else {
	    cout << n << " khong phai la so nguyen to";
	}
}
int main()
{
	int N; cin >> N;
	innguyento(N);
}