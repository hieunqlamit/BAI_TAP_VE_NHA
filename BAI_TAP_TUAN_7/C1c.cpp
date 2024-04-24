#include <bits/stdc++.h>
using namespace std;

void pad_right(char a[], int n) {
    int size = strlen(a);
    
    if (size < n) { 
        char *ptr = a + size;
        
        while (size < n) { 
            *ptr = ' '; 
            ptr++; 
            size++; 
        }
        *ptr = '\0'; 
    }
}

int main() {
    char a[1000] = "Hello";
    int n;
    cin >> n;
    
    cout << a << endl;
    pad_right(a, n);
    cout << a << endl;
    
    return 0;
}