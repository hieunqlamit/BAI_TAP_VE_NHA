#include <iostream>
using namespace std;

int factorial(int n) {
    cout << "n = " << n << " at " << &n << endl;
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int N ; cin >> N;
    int result = factorial(N);
    cout << "Factorial of " << N << " is: " << result << endl;
    return 0;
}
// 	Giá trị của N giảm dần từ giá trị ban đầu của N cho đến khi đạt tới điều kiện dừng.

//  Kích thước của một stack frame cho hàm factorial có thể được ước lượng bằng cách tính 
//  tổng kích thước của các biến cục bộ, tham số và các giá trị khác được lưu trữ trong frame. 