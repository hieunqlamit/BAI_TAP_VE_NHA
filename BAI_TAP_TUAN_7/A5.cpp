#include <bits/stdc++.h>
using namespace std;
char* weird_string() { 
   char c[] = "123345";
   return c; 
}int main()
{
	char* result = weird_string();
    cout << result;
        return 0;
}
//Khi biên dịch chương trình này, trình biên dịch sẽ cảnh báo về việc trả về 
//địa chỉ của một biến cục bộ (c) từ hàm weird_string(). Đây là một hành vi 
//không xác định, vì biến cục bộ sẽ bị hủy khi hàm kết thúc, vùng nhớ sẽ không 
//còn hợp lệ khi truy cập từ hàm gọi.