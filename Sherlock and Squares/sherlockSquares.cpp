#include <bits/stdc++.h>
using namespace std;

// one way
int numberOfSquare(int a, int b) {
    int count = 0;

    for(int i=sqrt(a); i<=sqrt(b); i++) {
        int power = pow(i, 2);

        if(power >= a && power <= b)
            count++;
    }

    return count;
}


// another way
int numberOfSquares(int a, int b) {
    /*
    number in the range a to b = (b - a) + 1 
    same for squeare integers. reasons for
        floor: numbers before b
        ceiling: number after a
    */
    int count = floor(sqrt(b)) - ceil(sqrt(a)) + 1;

    return count;
}


int main() {
    int q; cin >> q;
    int ans[q];
    
    for(int i=0; i<q; i++) {
        int a, b; 
        cin >> a >> b;
        
        ans[i] =  numberOfSquare(a, b);
        // ans[i] =  numberOfSquares(a, b);
    }

    for(auto i: ans)
        cout << i << endl;

    return 0;
}