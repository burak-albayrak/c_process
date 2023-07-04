//Write a program that finds the Least Common Multiple (LCM) of entered 2 positive integers. Use for loop.

#include <stdio.h>

int main() {

    int num1, num2, biggest, lcm;

    printf("Enter two positive integers: \n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        biggest = num1;
    } else {
        biggest = num2;
    }

    lcm = biggest;
    while (lcm % num1 != 0 || lcm % num2 != 0) {
        lcm += biggest;
    }

    printf("The least common multiple of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

