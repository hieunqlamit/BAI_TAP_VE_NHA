
#include <bits/stdc++.h>
using namespace std;
// Dao xau
char* reverse (const char a[]){
	int size = strlen(a);
	char* b = new char[size+1];
	for (int i = size-1; i >= 0; i--){
		b[size-1-i] = a[i];
	}
	b[size] = '\0';
	return b;
}
// Xoa ki tu
char* delete_char(const char a[], char c){
	int size = strlen(a);
	char* b = new char[size];
	int j = 0;
	for (int i = 0; i < size; i++){
		if (a[i] != c){
			b[j] = a[i];
			j++;
		}
	}
	b[j+1] = '\0';
	return b;
}
// Don phai
char* pad_right(const char a[], int n){
	int size = strlen(a);
	int toadd = n-size;
	char* b = new char[n+1];
	int i = 0;
	while(toadd){
		b[i] = 'h';
		toadd--;
		i++;
	}
	for (int j = 0; j < size; j++){
		b[i] = a[j];
		i++;
	}
	b[n] = '\0';
	return b;
}
// Don trai
char* pad_left(const char a[], int n){
	int size = strlen(a);
	char* b = new char[n+1];
	for (int i = 0; i < size; i++){
		b[i] = a[i];
	}
	for (int i = size; i < n; i++){
		b[i] = 'h';
	}
	b[n] = '\0';
	return b;
}
// Cat xau
char* truncate(const char a[], int n){
	int size = strlen(a);
	char* b = new char[n+1];
	for (int i = 0; i < n; i++){
		b[i] = a[i];
	}
	b[n] = '\0';
	return b;
}	

int main()
{
	char a[] = "Anhyeuem";
	char x = 'c';
	char* A1 = reverse(a);
	cout << A1 << endl;
	char* A2 = delete_char(a, x);
	cout << A2 << endl;
	int n = 20;
	char* A3 = pad_right(a, n);
	cout << A3 << endl;
	char* A4 = pad_left(a, n);
	cout << A4 << endl;
	int m = 4;
	char* A5 = truncate(a, m);
	cout << A5 << endl;
	
}
//
