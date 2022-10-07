#include <stdio.h>

int main()
{    
    // sam's house's coordinate
    int s, t;
    scanf("%d %d", &s, &t);
    
    // position of a-apple and b-orange tree 
    int a, b;
    scanf("%d %d", &a, &b);
    
    // number of m-apple and n-orange
    int m, n;
    scanf("%d %d", &m, &n);
    
    // for seeing where the fruits are falling
    int temp;
    
    // number of apple falling on sam's house
    int apple = 0;
    for(int i=0; i<m; i++) {
        scanf("%d", &temp);
        
        if((s <= a+temp) && (a+temp <= t)) {
            apple++;
        }
    }
    
    // number of orange falling on sam's house
    int orange = 0;
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        
        if((s <= b+temp) && (b+temp <= t)) {
            orange++;
        }
    }
    
    printf("%d \n", apple);
    printf("%d \n", orange);
    
    return 0;
}
