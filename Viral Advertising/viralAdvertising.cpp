#include <bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {
    int adPeople = 5;
    int like = 0;

    for(int i=1; i<=n; i++) {
        adPeople = floor(adPeople / 2);
        like += adPeople;
        adPeople *= 3;
    }

    return like;
}


int main() {
    int n; 
    cin >> n;

    cout << viralAdvertising(n); 

    return 0;
}