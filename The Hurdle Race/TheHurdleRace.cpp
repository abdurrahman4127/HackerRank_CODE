#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;

    int height[n];
    for(int i=0; i<n; i++){
        cin >> height[i];
    }

    // sorted in asceding order
    sort(height, height+n);

    // height[n-1] contains the max value of the array
    if(k >= height[n-1])
        cout << 0;
    else
        cout << height[n-1] - k;

    return 0;
}
