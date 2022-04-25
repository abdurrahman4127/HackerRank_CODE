#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    int A[n];
    int B[m];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }


    int count = 0;
       
    for(int x = 1; x <= 100; x++)
    {
        int flag = 1;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(x % A[i] || B[j] % x) {
                    flag = 0;
                } 
            }               
        }
        
        if(flag == 1) { 
            count++;
        }
    }
    
    cout << count;

    return 0;
}