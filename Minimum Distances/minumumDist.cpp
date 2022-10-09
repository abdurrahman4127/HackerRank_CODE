#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int A[n];

    for(int i=0; i<n; i++)
        cin >> A[i];

    bool pairExist = false;
    vector<int> pairDist;
    int dist = 0;

    for(int i=0; i<n; i++) { 
        for(int j=i+1; j<n; j++) {
            if(A[i] == A[j]) {
                pairExist = true;
                dist = abs(i - j);
                pairDist.push_back(dist);
            }
        }
    }

    if(pairExist) {
        // extracting min from pairDist 
        sort(pairDist.begin(), pairDist.end()); 
        // cout << pairDist.front(); // min is at index 0
        cout << pairDist[0]; 
    } 
    else 
        cout << -1;

    return 0;
}