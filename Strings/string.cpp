#include <bits/stdc++.h>
using namespace std;

void concatenate(string str1, string str2) {
    cout << str1 << str2 << endl;
}

// swap first indexed-value
void concatAndSwap(string str1, string str2) {
    for(int i=0; i<str1.size(); i++){
        if(i == 0){
            cout << str2[0];
        } else {
            cout << str1[i];
        }
    }  

    cout << " ";

    for(int i=0; i<str2.size(); i++){
        if(i == 0){
            cout << str1[0];
        } else {
            cout << str2[i];
        }
    }
}


int main() {
    string str1, str2;
    cin >> str1 >> str2;

    cout << str1.size() << " " << str2.size() << endl;

    concatenate(str1, str2);
    concatAndSwap(str1, str2);

    return 0;
}