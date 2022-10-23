#include <bits/stdc++.h>
using namespace std;

int main (){
    int i; long l; char c; float f; double d;
    cin >> i >> l >> c >> f >> d;

/*
    floating point value should be correct up to 3
    decimal places and the double to 9 decimal places
*/

    cout 
        << i << endl
        << l << endl
        << c << endl
        << fixed
        << setprecision(3) << f << endl
        << setprecision(9) << d << endl;

    return 0;
}

/*
about set precision: https://cplusplus.com/reference/iomanip/setprecision/
*/