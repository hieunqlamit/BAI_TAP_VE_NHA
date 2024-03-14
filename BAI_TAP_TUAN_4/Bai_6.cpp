#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n][n];
	memset(a, 0, sizeof a);
	a[0][n/2] = 1;
	int step = n*n -1;
	int i = 0; int j = n/2;
	int m = 2;
	while (step--){
		if (i-1 < 0 && j + 1 < n ){
			if (a[i-1+n][j+1] == 0)
			{
			a[i-1+n][j+1] = a[i][j] +1;
			i = i-1+n;
			j = j+1;
			}else {
				a[i+1][j] = a[i][j] +1;
				i = i+1;
			}
		} else if (i-1 >= 0 && j+1 >= n ){
			if (a[i-1][j+1-n] == 0)
			{
			a[i-1][j+1-n] = a[i][j] +1;
			i = i-1;
			j = j +1 -n;
			}else {
					a[i+1][j] = a[i][j] +1;
				i =i+1;
			}
		}else if (i -1 < 0 && j + 1 >= n){
			if (a[i-1+n][j+1-n] == 0){
				a[i-1+n][j+1-n] == a[i][j] +1;
			i = i -1;
			j = j +1 -n;
			}else {
					a[i+1][j] = a[i][j] +1;
				i = i +1 ;
			}
		}else if (i - 1 >= 0 && j + 1 < n){
		if (a[i-1][j+1] == 0){
			a[i-1][j+1] = a[i][j] +1;
			i = i -1;
			j = j+1;
		}else {
				a[i+1][j] = a[i][j] +1;
				i = i+1;
		}
	}
}
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        cout << setw(3) << a[i][j] << " ";
    }
    cout << endl;
}
}