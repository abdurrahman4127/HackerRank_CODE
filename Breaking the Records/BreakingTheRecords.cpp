#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int set[n];

    for(int i=0; i<n; i++) {
        cin >> set[i];
    }

    int maxVal = set[0];
    int minVal = set[0];

    int maxRecord = 0;
    int minRecord = 0;

    for(int i=1; i<n; i++) {
        if(set[i] > maxVal) {
            maxVal = set[i];
            maxRecord++;
        }

        if(set[i] < minVal) {
            minVal = set[i];
            minRecord++;
        }
    }

    cout << maxRecord << " " << minRecord << endl;

    return 0;
}