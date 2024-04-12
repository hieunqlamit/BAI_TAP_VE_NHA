#include <bits/stdc++.h>
using namespace std;
 int number = 6;
int main()
{
    int m, n, k; cin >> m >> n >> k;
    int a[m+2][n+2];
    for (int i = 0; i < m+2; i++){
        for (int j = 0; j < n+2; j++){
            a[i][j] = 0;
        }
    }
    srand(time(NULL));
    while (k--){
        int i = rand() % m;
        int j = rand() % n;
        a[i][j] =1;
    }
    while (number --){
        int x, y; cin >> x >> y;
    if (a[x][y] == 1){
        cout << "YOU'RE DEAD";
        return 0 ;
    }else {
        for (int i = x-1; i <= x+1; i++){
        {
            for (int j = y -1; j <= y+1; j++){
                a[x][y] += a[i][j];
            }

        }
    }
}
for (int i = 1; i < m+1; i++){
for (int j = 1; j < n+1; j++){
    cout << a[i][j] << " ";
}
cout << endl;
}
    }
}