#include <stdio.h>

int main() {
    
    // the number of squares in the chocolate bar (i.e. size)
    int n;
    scanf("%d", &n);
    
    // scanning the array (squares in the chocolate bar)
    int A[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    
    /* d = number of 'sum of the contiguous segment'
       m = contiguous segment of the bar */
    int d, m;
    scanf("%d %d", &d, &m);

    int count = 0; 
    for(int i=0; i<n; i++) {
        int sum = 0;

        // sum of elements from A[i] to 'contiguous segment'
        for(int j=0; j<m; j++) {
            sum += A[i+j]; 
        }

        if(sum == d) {
            count++;  // counting the number of the sum of the segments 
        }
    }

    printf("%d", count);
    
    return 0;
}