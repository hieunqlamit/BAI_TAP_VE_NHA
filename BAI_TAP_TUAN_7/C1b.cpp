#include <bits/stdc++.h>
using namespace std;
void delete_char(char a[], char c){
	char* x = a;
	char* y = a;
	while (*x){
		if (*y != c){
			*x = *y;
			x++;
		}
		y++;
	}
	*x = '\0';
}
int main()
{
	char a[] = "Acc Acc Acc";
	cout << a << endl;
	char c = 'c';
	delete_char(a, c);
	cout << a << endl;
}