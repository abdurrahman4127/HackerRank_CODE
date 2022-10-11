#include <bits/stdc++.h>
using namespace std;

int equalizeArray(int arr[], int n) {
    int duplicate = 0;
    
    for(int i=0; i<n; i++) {
        int count = 0;
        
        for(int j=i; j<n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(duplicate < count)
            duplicate = count;
    }

    int del = n - duplicate;

    return del;
}


int main() {    
    int n; cin >> n; 

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << equalizeArray(arr, n);    

    return 0;
}