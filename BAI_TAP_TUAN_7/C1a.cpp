#include <bits/stdc++.h>
using namespace std;
void reverse (char a[]){
	char* start = a;
	char* end = a + strlen(a) -1;
	while (start < end){
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start ++;
		end--;
	}
}
int main()
{
	char a[] = "Anh Yeu Em";
	cout << a << endl;
	reverse(a);
	cout << a;
}