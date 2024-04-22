#include <iostream>
#include <string>

using namespace std;

// Hàm chuyển đổi số nguyên sang chuỗi tiếng Anh
string numberToString(int num) {
  // Mảng chứa các từ tiếng Anh cho các số 0-9
  string ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  string tens[] = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

  // Xử lý số âm
  if (num < 0) {
    return "negative " + numberToString(-num);
  }

  // Xử lý số 0
  if (num == 0) {
    return "zero";
  }

  // Xử lý số từ 1 đến 99
  if (num < 100) {
    int digit1 = num / 10; // Chữ số hàng chục
    int digit2 = num % 10; // Chữ số hàng đơn vị

    if (digit1 == 0) {
      return ones[digit2];
    } else {
      return tens[digit1 - 1] + (digit2 == 0 ? "" : " " + ones[digit2]);
    }
  }

  // Xử lý số từ 100 đến 999
  if (num < 1000) {
    int digit1 = num / 100; // Chữ số hàng trăm
    int remaining = num % 100; // Số còn lại (chữ số hàng chục và đơn vị)

    return ones[digit1] + " hundred" + (remaining == 0 ? "" : " " + numberToString(remaining));
  }

  // Xử lý số từ 1.000 đến 999.999
  if (num < 1000000) {
    int digit1 = num / 1000; // Chữ số hàng nghìn
    int remaining = num % 1000; // Số còn lại (số có 3 chữ số)

    return numberToString(digit1) + " thousand" + (remaining == 0 ? "" : " " + numberToString(remaining));
  }

  // Xử lý số từ 1.000.000 đến 999.999.999
  if (num < 1000000000) {
    int digit1 = num / 1000000; // Chữ số hàng triệu
    int remaining = num % 1000000; // Số còn lại (số có 6 chữ số)

    return numberToString(digit1) + " million" + (remaining == 0 ? "" : " " + numberToString(remaining));
  }

  // Xử lý số lớn hơn 1.000.000.000
  return "too big";
}

int main() {
  int num;
  cin >> num;

  string englishNum = numberToString(num);
  cout << englishNum << endl;

  return 0;
}