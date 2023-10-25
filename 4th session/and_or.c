#include <stdio.h>

int main() {
    // Write C code here
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);


    // || - or
    // && - and

    if(a >= b && a >= c) {
        printf("%d is the maximum", a);
    } else if(b >= a && b >= c) {
        printf("%d is the maximum", b);
    } else {
        printf("%d is the maximum", c);
    }




    return 0;
}