//Play a game of guess the character.
//
//Set the character as 'k'. Then ask the user to guess the character.
// The user must enter characters until they guess it correctly.
// If the guessed character is less than 'k', ask the user to go forward in the alphabet.
// If the guessed character is further in the alphabet, ask the user to go backward in the alphabet.
// Stop the loop when the character is guessed correctly.

// I made this random instead of 'k'.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    char ch = 'a' + rand() % 26;
    char guess;
    printf("!! Welcome to letter guess game !!\n");

    do{
        printf("guess a letter: ");
        scanf(" %c", & guess);
        if(guess > ch){
            printf("Go backward!\n");
        }else if(ch > guess){
            printf("Go forward!\n");
        }

    }while(guess != ch);

    printf("Congratulations! You guessed the letter '%c' correctly.\n", ch);

    return 0;
}
