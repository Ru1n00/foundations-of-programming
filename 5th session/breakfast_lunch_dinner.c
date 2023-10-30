#include <stdio.h>

int main() {
    int hour;
    printf("Enter the hour: ");
    scanf("%d", &hour);
    
    // hour = 4 - 10  - breakfast
    // hour=  12 - 14  - lunch
    // hour == 18 - 22  - dinner
    // hour               Patience is a virtue
    // 0 - 23       -2, -24 52          Wrong time
    
    
    if(hour >= 4 && hour <= 10){
        printf("Breakfast\n");
    } else if(hour >= 12 && hour <= 14) {
        printf("Lunch\n");
    } else if(hour >= 18 && hour <= 22) {
        printf("Dinner\n");
    } else if(hour > 23 || hour <= 0){
        printf("Wrong time\n");
    } 
    else {
        printf("Patience is a virtue\n\n");
    }

    
    
    printf("the code has finished running");
    
    return 0;
    
}