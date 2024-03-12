#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n+i-1; j++){
            int x = j;
            if (x >= n+1){
                x = x -n;
                
            }
            cout << x << " ";
            
        }
        cout << endl;
    }
}