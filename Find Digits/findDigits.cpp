#include <bits/stdc++.h>
using namespace std;

int findDigits(int n) {
    int temp = n, count = 0;
    
    while(temp != 0) {
        int digit = temp % 10;
        
        if(digit != 0 && n % digit == 0)
            count++;

        temp = temp / 10;
    }

    return count;
}

int main() {
    int t; cin >> t;
    int ans[t];

    for(int i=0; i<t; i++) {
        int n; cin >> n;
        ans[i] = findDigits(n);
    }

    for(auto i: ans)
        cout << i << endl;

    return 0;
}