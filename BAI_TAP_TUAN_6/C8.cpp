// Co su dung thu vien <math.h>
#include <bits/stdc++.h>
using namespace std;
int lamtron(double n){
	return int(round(n));
}
int main()
{
	double n;
	cout << lamtron(n);
}
// Khong su dung thu vien <math.h>
 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
 	double n; cin >> n;
 	if (n - (int(n) < 0.5){
 		cout << int(n);
 	} else {
 		cout << int(n+1);
 	}
 }