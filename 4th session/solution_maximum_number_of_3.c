#include <stdio.h>

int main() {
    // Write C code here
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);


    // 30 25 45
    if(a >= b) {
        if(a >= c) {
            printf("%d is the maximum", a);
        } else {
            printf("%d is the maximum", c);
        }
    } else if(b >= c) {
        if(b >= a) {
            printf("%d is the maximum", b);
        } else {
            printf("%d is the maximum", a);
        }
    } else {
        printf("%d is the maximum", c);
    }



    return 0;
}