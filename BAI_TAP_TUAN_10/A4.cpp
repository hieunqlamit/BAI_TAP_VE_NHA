#include <iostream>

int* LocalPointer(int value) {
    int localVar = value; // Biến địa phương
    int* ptr = &localVar; // Con trỏ trỏ đến biến địa phương
    return ptr;
}

int main() {
    int* ptr = LocalPointer(5); 
    delete ptr;

    // Sau khi giải phóng con trỏ, biến địa phương đã được giải phóng và con trỏ trỏ đến vùng nhớ không còn hợp lệ
    // Chương trình có thể hoạt động không đúng hoặc dẫn đến hành vi không xác định

    return 0;
}