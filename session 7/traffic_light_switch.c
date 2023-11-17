#include <stdio.h>

int main() {
    
    char light;
    scanf("%c", &light); // y
    
    switch(light) {
        case 'r':
            printf("The light will be green\n");
            break;
        case 'g':
            printf("The light will be yellow\n");
            break;
        case 'y':
            printf("The light will be red\n");
            break;
        default:
            printf("Light is broken\n");
    }

    return 0;
}