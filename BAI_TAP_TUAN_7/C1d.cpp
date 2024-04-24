#include <iostream>
#include <cstring>

using namespace std;

void pad_left(char a[], int n) {
    int size = strlen(a);     
    if (size < n) {         
    	int spacesToAdd = n - size; 
        char *ptr = a + size + spacesToAdd;        
        
        while (size >= 0) {
            *(ptr) = *(ptr - spacesToAdd);        
            ptr--;
            size--;
        }
        
                while (spacesToAdd > 0) {
            *ptr = ' ';
            ptr--;
            spacesToAdd--;
        }
    }
}

int main() {
    char a[20] = "Hello";
    int n = 10;
    
    cout << a << endl;
    pad_left(a, n);
    cout <<  a << endl;
    
    return 0;
}