#include <stdio.h>

int main() {

    // variable is a container that stores a value

    // int number1 = 10;  here int is a data type, number1 is the name of the variable and 10 is the value of the variable, we can also declare and initialize a variable separately like this:
        // int number1;  here int is a data type and number1 is the name of the variable
        // number1 = 10;  here 10 is the value of the variable

    // note: we can't declare a variable without a data type


    // int is a data type that represents integers
    // number1 is the name of the variable
    // 10 is the value of the variable

    int number1;        // declaration of a variable
    number1 = 10;       // initialization of a variable
    int number2 = 30;  // declaration and initialization of a variable
    


    int sum = number1 + number2;    // declaration and initialization of a variable using other variables

    printf("The value of number1 is %d\n", number1); // printing the value of a variable

    printf("The value of number2 is %d\n", number2); // printing the value of a variable

    printf("The value of sum is %d\n", sum); // printing the value of a variable

    
    printf("The sum of %d and %d is %d", number1, number2, sum); // printing multiple variables
    
    return 0;
}