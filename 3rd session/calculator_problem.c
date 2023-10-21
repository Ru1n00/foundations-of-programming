// Problem: Change the following code to do what line 33 and 35 says
#include <stdio.h>
int main() {
    int num1, num2, result;
    char op;
        
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the operator: ");
    scanf(" %c", &op); // *
    

    // true or false
    if(op == '+') {
        // printf("User want to do addition\n");      // \n = new line
        result = num1 + num2;
    } else if(op == '-') {
        // printf("User want to do subtraction\n");
        result = num1 - num2;
    } else if(op == '*') {
        // printf("User want to do multiplication\n");
        result = num1 * num2;
    } else if(op == '/') {
        // printf("User want to do division\n");
        result = num1 / num2;
    } else {
        printf("You can only do + - * /\n");
        return 0;
    }
    
    printf("%d %c %d = %d", num1, op, num2, result); // if user input a wrong operator this line will not show in output
    
    printf("The code is finished!!");  // this line  will always be shown in output

    return 0;
    
}