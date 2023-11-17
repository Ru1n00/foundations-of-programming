#include <stdio.h>

int main() {
    
    int day;
    scanf("%d", &day);
    int num = 10;
    switch(day) {
        case 1:
            if(2 == 2) {
                printf("print 2\n");
            }
            while(num--) {
                printf("%d\n", num);
            }
            printf("Saturday\n");
            break;
        case 2:
            printf("Sunday\n");
            break;
        case 3:
            printf("Monday\n");
            break;
        case 4:
            printf("Tuesday\n");
            break;
        case 5:
            printf("Wednesday\n");
            break;
        case 6:
            printf("thursday\n");
            break;
        case 7:
            printf("Friday\n");
            break;
        default:
            printf("INput is not correct");
    }

    return 0;
}