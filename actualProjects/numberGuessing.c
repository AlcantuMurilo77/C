#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int minRandom = 1;
    int maxRandom = 100;
    int randomNumber = (rand() % (maxRandom - minRandom + 1)) + minRandom;


    printf("Random number guessing game\n");

    while(guess != randomNumber){
        printf("\nGuess the number! (answer is %d) (number of tries: %d): ", randomNumber, tries);
        scanf("%d", &guess);

        if (guess < randomNumber){
            printf("\nHIGHER! \n");
        } else if (guess > randomNumber){
            printf("\nLOWER!\n");
        }

        tries++;
    }

    printf("\nYOU GOT IT!\n");

    return 0;
}