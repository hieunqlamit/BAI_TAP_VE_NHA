#include <bits/stdc++.h>
using namespace std;
void cube(int i){
	i = i * i * i;
}
int main()
{
	for (int i = 0; i < 1000; i++) 
	  {
	  	cube(i);
	  	cout << i << endl;
	  }
}
// Hàm cube chạy 1000 lần