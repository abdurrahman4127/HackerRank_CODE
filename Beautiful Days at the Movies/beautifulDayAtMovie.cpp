#include <bits/stdc++.h>
using namespace std;

int findReverse(int temp) {
    int rev = 0, rem;
    int x = temp;
    while(x !=0) {
        rem = x % 10;
        rev = rev * 10 + rem;

        x = x / 10;
    }

    return rev;
}

int main() {
    int start, end, div, count = 0;
    cin >> start >> end >> div;

    for(int i=start; i<=end; i++) {
        int rev = findReverse(i);
        int sub = abs(i - rev);

        if(sub % div == 0)
            count++;
    }

    cout << count;

    return 0;
}