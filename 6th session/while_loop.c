#include <stdio.h>

int main() {
    
    int i = 1;
    
    while(i <= 100)   // this code will run 100 times until the condition is false
    {  
        printf("Promith\n");  // this line will be printed 100 times
        i = i + 1;   // we are increasing the value of i by 1 in each iteration so that the condition will be false after 100 times
                    // we can also write i++ instead of i = i + 1
    }
    
    return 0;
}