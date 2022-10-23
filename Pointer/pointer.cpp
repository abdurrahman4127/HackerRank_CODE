#include <bits/stdc++.h>
using namespace std;

void update(int &a, int &b) {
    int tempA = a, tempB = b; 
    a = tempA + tempB;
    b = max(tempA, tempB) - min(tempA, tempB); // max - min
}

int main() {
    int a, b;
    cin >> a >> b;
    
    update(a, b);
    cout << a << endl << b << endl;

    return 0;
}
