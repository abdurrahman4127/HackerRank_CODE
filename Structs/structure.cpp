#include <bits/stdc++.h>
using namespace std;

struct Student {
    int age; 
    string first_name, last_name; 
    int standard; 
};

int main() {
    Student s;
    cin 
        >> s.age
        >> s.first_name 
        >> s.last_name 
        >> s.standard;

    cout 
        << s.age << " "
        << s.first_name << " " 
        << s.last_name << " "
        << s.standard;

    return 0;
}