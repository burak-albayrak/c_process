//Write a program that finds the sum of the following series using while loop:
//1 + 2 - 3 + 4 - 5 + 6 - ... - 99 + 100

#include <stdio.h>

int main() {

    int i = 2;
    int sum = 0;

    while (i < 101) {

        if (i % 2 == 0) {

            i = i + 1;
        }
        else if(i % 2 != 0){

            i = i - 1;
        }

        sum = sum + i;
        i++;
    }
    printf("%d", sum + 1);
    return 0;
}
