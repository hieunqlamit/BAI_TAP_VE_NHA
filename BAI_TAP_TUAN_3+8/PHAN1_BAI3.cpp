#include <bits/stdc++.h>
using namespace std;
struct Point{
	int x; 
	int y;
	void get(){
		cin >> x >> y;
	}
};
Point midle(const Point A,const Point B){
	Point z;
	z.x = (A.x + B.x) / 2;
	z.y = (A.y + B.y) / 2;
	return z;
}
int main() {
	Point A;
	A.get();
	Point B;
	B.get();
	Point C = midle(A, B);
	cout << C.x << " " << C.y;
	}
