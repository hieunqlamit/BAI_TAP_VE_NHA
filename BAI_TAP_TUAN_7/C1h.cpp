#include <bits/stdc++.h>
using namespace std;
void trim_right(char a[]){
	int size = strlen(a);
	char* end = a + size -1;
	while (*end == ' '){
		end--;
	}
	*(end + 1) = '\0';
}
int main()
{
	char a[10] = "anh.    ";
	trim_right(a);
	cout << a;
}