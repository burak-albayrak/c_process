//Ask the user to enter 2 positive integers.
//Check whether the first integer is smaller than the second integer.
//If it is, find the sum of the odd and even integers in the interval (separately).

#include <stdio.h>

int main() {
    int num1, num2, temp;
    int odd = 0, even = 0;

    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {
        while (num1 <= num2) {
            if (num1 % 2 == 0) {
                even += num1;
            } else {
                odd += num1;
            }
            num1++;
        }
        printf("Sum of even numbers: %d\n", even);
        printf("Sum of odd numbers: %d\n", odd);
    }else if(num1 == num2){
        printf("both of numbers are equal and their sum: %d", num1 + num2);
    }else{
        temp = num1;
        num1 = num2;
        num2 = temp;
        while (num1 <= num2) {
            if (num1 % 2 == 0) {
                even += num1;
            } else {
                odd += num1;
            }
            num1++;
        }
        printf("Sum of even numbers: %d\n", even);
        printf("Sum of odd numbers: %d\n", odd);
    }

    return 0;
}
