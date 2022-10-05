#include <bits/stdc++.h>
using namespace std;


int findHeight(int season) {
    int height = 1; // initial height
    
    /* each spring, it doubles in height (even seasons)
    each summer, its height increases by 1 meter (odd seasons) */

    for(int i=1; i<=season; i++) {
        if(i % 2 == 0) 
            height++;
        else 
            height = height * 2;
    }

    return height;
}


int main() {
    int t; cin >> t;

    int ans[t];

    for(int i=0; i<t; i++) {
        int season; cin >> season;

        // saving te answers in an array
        ans[i] = findHeight(season);
    }

    for(auto i: ans)
        cout << i << endl;

    return 0;
}
