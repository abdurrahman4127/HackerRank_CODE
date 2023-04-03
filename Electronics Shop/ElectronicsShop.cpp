#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, n, m;
    cin >> b >> n >> m;

    int KB[n], USB[m];

    // scan for keyboards
    for(int i=0; i<n; i++) {
        cin >> KB[i];
    }

    // scan for USB
    for(int i=0; i<m; i++) {
        cin >> USB[i];
    }

    // to return -1 if no combination found that is lesser than "b"
    int cost = -1; 

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(KB[i] + USB[j] <= b) {
                // fetching the better one among the accepted ones
                cost = max((KB[i] + USB[j]), cost);
            }
        }
    }

    cout << cost;

    return 0;
}
