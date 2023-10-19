// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int num1, num2;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the operator: ");
    scanf("%c", &op);
    
    printf("num1 is %d and num2 is %d and the operator is %c", num1, num2, op);

    return 0;
    
}
