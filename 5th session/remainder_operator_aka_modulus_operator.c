#include <stdio.h>

int main() {

    // try to find a remainder using (* / -) operators  189 13 
    
    int earning = 1280043540;
    int people = 11;
    int rem = earning % people;
    if(rem == 0) {
        printf("All the people will get the same amount\n");
    } else {
        printf("After distributing, %d tk is left\n", rem);
    }
    
    printf("Remainder is %d", rem);
    

    
    return 0;
    
}