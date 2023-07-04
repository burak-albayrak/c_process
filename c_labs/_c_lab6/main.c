//Write a program that asks the user to fill an array of length "n" with integers and displays the array in descending order.

#include <stdio.h>

int main() {
    int n;
    int array[n];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter an integer: ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("The array in descending order is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
