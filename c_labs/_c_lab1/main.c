//Use switch-case to build a simple calculator.
//The user enters two numbers and a mathematical operator (+,-,*,/).
//The program calculates and prints the result.

#include <stdio.h>

int main() {

    float num1, num2, result = 0;
    char operation;

    printf("Welcome To Calculator\n");
    printf("Please enter the number 1: ");
    scanf("%f", & num1);
    printf("Please enter the number 2: ");
    scanf("%f", & num2);
    printf("Please enter the operation:\n"
           "for addition       --> type: 'a'\n"
           "for subtraction    --> type: 's'\n"
           "for division       --> type: 'd'\n"
           "for multiplication --> type: 'm'\n"
           "operation: ");
    scanf(" %c", & operation);

    switch (operation) {
        case 'a':
            result = num1 + num2;
            break;
        case 'm':
            result = num1 * num2;
            break;
        case 'd':
            if(num1 > num2){
                result = num1 / num2;
            } else {
                result = num2 / num1;
            }
            break;
        case 's':
            result = num1 - num2;
    }

    printf("calculation is: %2.f", result);

    return 0;
}
