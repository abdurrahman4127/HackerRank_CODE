#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    char comma = ',';
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == comma) 
            cout << endl;
        else 
            cout << str[i];
    }
       
    return 0;
}