#include <stdio.h>
int main() {
    int i = 65;
    int j = i+25;
    
    while(i <= j) {
        printf("%c\n", i);
        i++;
    }
    
    for(int i = 65, j = i + 25; i <= j; i++) {
        printf("%c\n", i);
    }
    
    return 0;
}