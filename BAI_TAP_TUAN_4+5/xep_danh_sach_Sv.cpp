#include <bits/stdc++.h>
using namespace std;
struct Sinhvien{
	string name;
	double Toan;
	double Van;
	double Anh;
	
	void nhap()
	{
		
		getline(cin, name);
		cin >> Toan >> Van >> Anh;
		cin.ignore();
	}
	void in()
	{
		cout << name << " " << Toan << " " << Van << " " << Anh << endl;
	}
};

int main()
{
	Sinhvien a, b, c;
	a.nhap();
	b.nhap();
	c.nhap();
	vector <int> score;
	score.push_back(a.Toan);
	score.push_back(b.Toan);
	score.push_back(c.Toan);
	sort(score.begin(), score.end());
	for (int i = 1; i <=3; i++){
		 Sinhvien top;
    if (a.Toan == score[3-i]){
    	top = a;
    	top.in();
	}else if (b.Toan == score[3-i]){
		top = b;
		top.in();
	}else {
		top = c;
		top.in();
	}
	}	
}