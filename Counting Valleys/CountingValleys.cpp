#include <bits/stdc++.h>
using namespace std;


int countingValleys(int steps, string path) 
{
    int level = 0, valleyes = 0;  // initially, sea-level is 0; also number of valleys is 0
    
    for(int i = 0; i < steps; i++) {
        if(path[i] == 'U') 
        {
            level++;  // level UP 
            
            if(level == 0) {  
                valleyes++;
            }
        } 
        else if(path[i] == 'D') {
            level--;   // // level DOWN
        }
    }
    
    return valleyes;
}


int main() {
    int steps; cin >> steps;
    string path; cin >> path;

    int valleyes = countingValleys(steps, path);
    cout << valleyes;

    return 0;
}
