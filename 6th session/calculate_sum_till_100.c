#include <stdio.h>

int main() {
    int i = 1;   // we are initializing i with 1
    int sum = 0;  // initially sum is 0
    
    while(i <= 100){   // this code will run 100 times until the condition is false
        // printf("Sum is %d and i is %d\n", sum, i);
        sum = sum + i;  // we are adding i with sum and storing the result in sum
        i = i + 1;     // we are increasing the value of i by 1
    }
    printf("%d", sum); // we are printing the sum

    return 0;
}