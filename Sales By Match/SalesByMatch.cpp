#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    /* taking an array of (n + 1) size to measure frequency
       just like it was done for MigratoryBird problem */

    int m = n + 1;
    int Freq[m] = { 0 };  
    
    for (int i = 0; i < n; i++) {
        int index = A[i];

        Freq[index]++;
    }
    
    // pairs is to counts the pairs
    int pairs = 0;
    for(int i = 1; i < m; i++) {
        pairs += Freq[i] / 2;   // integer division; not on array A, it's on the frequency array
    }

    cout << pairs;

    return 0;
}