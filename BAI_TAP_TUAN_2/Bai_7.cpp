#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    int count = 0;
    while (count != 1){
        int x;
        cin >> x;
        v.push_back(x);
        if (x < 0) count ++;
    }
    int size = v.size();
    for (int i = 0; i < size - 1 ; i++){
        if(v[i] == v[i+1]){
           v[i] = -100;
        
        }
    }
    for (auto i : v){
        if (i != -100){
            cout << i << " ";
        }
    }
}