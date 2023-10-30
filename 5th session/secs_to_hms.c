
#include <stdio.h>

int main() {
    int sec;
    printf("Enter the seconds: ");
    scanf("%d", &sec);
    // + - * / %
    // 3700 secs
    // 61 40
    // 1  1 

    // at first, divide the sec with 60 we will get the minute -- there may be remiander , this remainder will be the seconds we will print in the output
    // we will get minutes -- it can be greater than 60


    // then, divide the minutes with 60 we will get hour -- there may be remiander, this remiander will be the the minutes we will print in the output
    
    if(sec < 0){
        printf("The second cannot be negative");
        // return 0;
    } else {
        int minute = sec / 60;
        // printf("%d\n", sec);
        sec = sec % 60;
        // printf("%d\n", sec);
        // printf("%d %d", minute, sec);
        int hour = minute / 60;
        minute = minute % 60;
        
        printf("The hour is %d, the minute %d and the second is %d\n", hour, minute, sec);
    }
    
    return 0;
    
}