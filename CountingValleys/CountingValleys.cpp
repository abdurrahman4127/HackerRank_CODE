#include <bits/stdc++.h>
using namespace std;


int countingValleys(int steps, string path) 
{
    int level = 0, valleyes = 0;
    
    for(int i = 0; i < steps; i++){
        if(path[i] == 'U'){
            level++;
            
            if(level == 0){
                valleyes++;
            }
        } 
        else if(path[i] == 'D') {
            level--;
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