#include <stdio.h>

int main() {
    int i = 1;
    int fact = 1;  // we are initializing fact with 1 because 1 is the multiplicative identity
    // 5*4*3*2*1
    // 1*2*3*4*5
    while(i <= 5) {
        fact *= i;  // fact = fact * i;
        i++;        // i = i + 1;
    } 
    
    printf("%d", fact);
    
    return 0;
}