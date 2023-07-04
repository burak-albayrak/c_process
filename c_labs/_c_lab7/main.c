// Write a program that reads a string from the user and prints the number of words in the string.

#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int isWord = 0;

    while (*str) {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            isWord = 0;
        }
        else if (isWord == 0) {
            isWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int words = countWords(str);
    printf("Number of words: %d\n", words);

    return 0;
}
