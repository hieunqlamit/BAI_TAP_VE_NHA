#include <bits/stdc++.h>
using namespace std;
struct Point {
	int x; 
	int y;
};
void get(Point& p){
	cin >> p.x;
	cin >> p.y;
}
void print(Point p) {
    cout << p.x << " " << p.y;
}
int main()
{
	Point a;
	get(a);
	print (a);
}