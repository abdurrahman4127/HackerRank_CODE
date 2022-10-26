#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> A(n);

    // taking n-numner of array in n-dimensional vector
    for (int i=0; i<n; i++) {
        int size;
        cin >> size;

        for(int j=0; j<size; j++) {
            int temp; 
            cin >> temp;
            A[i].push_back(temp);
        }       
    }

    // for q queries
    for (int k=0; k<q; k++) {
        int i, j;
        cin >> i >> j;
        cout << A[i][j] << "\n";
    }    

    return 0;
}