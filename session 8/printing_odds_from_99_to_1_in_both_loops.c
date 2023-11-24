#include <stdio.h>

int main() {
    // 99 97 95 ... 1
    int i = 99;
    while(i >= 1) {
        printf("%d\n", i);
        i -= 2;  // i = i - 2
    }
    
    for(int i = 99; i >= 1 ; i-=2) {
        printf("%d\n", i);
    }

}