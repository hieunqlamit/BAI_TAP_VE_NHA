#include <bits/stdc++.h>
using namespace std;
void xoanoc(int m, int n, int a[][100]){
	int top = 0; int left =  0; int botton = m -1; int right = n -1;
	int value = 1;
	while (left <= right && top <= botton){
	
		for (int i = left; i <= right; i ++){
			a[top][i]= value++;
	}                          
	top ++;
	
	for (int i = top ; i <= botton; i++){
		a[i][right] = value++;
	}    		
	right --;
	if (top <= botton){
		for(int i = right; i >= left; i--){
			a[botton][i] = value++;
		}
		botton --;
		
	}
	if (right >= left){
		for (int i = botton; i >= top; i--){
			a[i][left] = value++;
		}
		left++;
	}
}

for (int i = 0; i < m; i++){
	for (int j = 0; j < n; j++){
		cout << setw(3) << a[i][j];
	}
	cout << endl;
}
}

int main()
{
 int m, n; cin >> m >> n;
 int a[100][100] = {0};
 xoanoc(m, n, a);
}