#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int A[n];
    
    for(int i=0; i<n; i++) {
        cin >> A[i];
    }    
    
    /* sorting in ascending order.
    so, min = 1st index & max = last n-1 index */
    
    sort(A, A+n); 
    cout << "Result = " << A[n-1] - A[0];
       
    return 0;
}
