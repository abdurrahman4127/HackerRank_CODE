#include <bits/stdc++.h>
using namespace std;

int pageCount(int n, int p) {
    int attemp = min(p/2, n/2 - p/2);
    
    return attemp;
} 

int main() 
{
    /* n: the number of pages in the book
       p: the page number to turn to */
       
    int n, p;
    cin >> n >> p; 

    int attemp = pageCount(n, p);
    cout << attemp;
    
    return 0;
}
