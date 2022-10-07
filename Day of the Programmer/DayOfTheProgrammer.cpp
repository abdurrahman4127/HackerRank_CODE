#include <bits/stdc++.h>
using namespace std;


/* gregorian calendar leap year system: 
divisible by 400.
divisible by 4 and not divisible by 100. */

bool isGregorianLeapYear(int year) {
    if(year % 400 == 0)
        return true;
    else if(year % 4 == 0 && year % 100 != 0){
        return true;
    }

    return false;
}


/* julian calendar leap year system: 
just divisible by 4*/

bool isJulianLeapYear(int year) {
    if(year % 4 == 0)
        return true;
    return false;
}


int main() {
    int year; cin >> year;

    // julian calendar
    if(year >= 1700 && year <= 1917){
        if (isJulianLeapYear(year)) 
            cout << "12.09." << year; 
        else 
            cout << "13.09." << year;
    }

    // the transition from the julian to gregorian
    else if(year == 1918){
        cout << "26.09." << year;
        exit(0);
    }
    
    //  gregorian calendar
    else if(isGregorianLeapYear(year)) {
        cout << "12.09." << year; 
    } else {
        cout << "13.09." << year;
    }

    return 0;
}
