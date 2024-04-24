#include<bits/stdc++.h>
using namespace std;
char* concat(const char* a, const char* b){
	int len1 = strlen(a);
	int len2 = strlen(b);
	char* result = new char [len1 + len2 + 1];
	char* tmp = result;
	while (*a != '\0'){
		*tmp = *a;
		a++;
		tmp++;
	}
	while (*b != '\0'){
		*tmp = *b;
		b++;
		tmp++;
	}
	*tmp = '\0';
	return result; 
}
int main()
{
	const char* str1 = "Hello";
    const char* str2 = "World";
    char* cnt = concat(str1, str2);
    cout << cnt;
}