#include <bits/stdc++.h>
using namespace std;

void cutTheStick(vector<int> A, int n) {
    int count = 1;
    cout << n << endl;
    int temp = n;
    
    for(int i=1; i<n; i++) {
        if(A[i] != A[i-1]) {
            temp = temp - count;
            cout << temp << endl;
            count = 1;
        } 
        else {
            count++;
        }
    }
}


int main() {
    int n; cin >> n;

    // if length is <= 1
    if(n <= 1) {
        cout << n;
    } 
    else {
        vector<int> A(n);
        for(int i=0; i<n; i++) 
            cin >> A[i];
    
        sort(A.begin(), A.end());
        cutTheStick(A, n);
    }

    return 0;
}