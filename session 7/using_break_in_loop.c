// guessing game
#include <stdio.h>
int main() {
    
    int guess = 15;
    int userInput;
    while(1) {
        printf("Guess the number: ");
        scanf("%d", &userInput);
        
        if(userInput == guess) {
            printf("You have won!\n");
            break;
        } else {
            printf("You guess is wrong. try again!!\n");
        }
    }
    return 0;
}