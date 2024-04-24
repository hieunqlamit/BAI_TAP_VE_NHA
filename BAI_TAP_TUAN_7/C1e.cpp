#include <bits/stdc++.h>
using namespace std;
void truncate(char a[], int n){
	int size = strlen(a);
	char* ptr = a + size -1;
	if (size > n){
		while (size != n){
			*ptr = '\0';
			ptr--;
			size --;
		}
	}
}
int main()
{
	char a[11] = "Anhyeuems!";
	int n; cin >> n;
	truncate (a, n);
	cout << a;
}