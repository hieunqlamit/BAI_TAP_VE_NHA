#include <bits/stdc++.h>
using namespace std;
void trim_left(char a[]){
	
	char* str = a;
	while (*str == ' '){
		str++;	
	}
	char* dest = a;
	while (*str != '\0'){
		*dest = *str;
		dest++;
		str++;
	}
	*dest = '\0';
	
}
int main()
{
	char a[10] = "   anhyeu";
	trim_left(a);
	cout << a;
}