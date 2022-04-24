#include <stdio.h>

int main(){
    
    // sam's house 
    int s, t;
    scanf("%d %d", &s, &t);
    
    // apple and orange tree position
    int a, b;
    scanf("%d %d", &a, &b);
    
    // number of m-apple and n-orange
    int m, n;
    scanf("%d %d", &m, &n);
    
    int temp;
    
    // apple on sam's house
    int apple = 0;
    for(int i=0; i<m; i++){
        scanf("%d", &temp);
        
        if(s <= a+temp && a+temp <= t){
            apple++;
        }
    }
    
    // orange on sam's house
    int orange = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &temp);
        
        if(s <= b+temp && b+temp <= t){
            orange++;
        }
    }
    
    printf("%d \n", apple);
    printf("%d \n", orange);
    
    return 0;
}