#include <bits/stdc++.h>
using namespace std;
int main() {
      
    struct Student{
        int age;
        string first_name;
        string last_name;
        int standard;
    };
    Student s;
    cin >> s.age >> s.first_name >> s.last_name >> s.standard;
    cout << s.age << " " 
    << s.first_name << " "
    << s.last_name << " "
    << s.standard;
    
    return 0;
}
