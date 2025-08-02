#include <stdio.h>
#include <stdbool.h>

int main(){

    int x;
    int max = 0;
    while (max < 11){
    printf("Choose a number (number of runs: %d): ", max);
    scanf("%d", &x);

    if (x == 10 || x == 0){
        printf("Its 10 or 0\n");
    } else{
        printf("It's not 10 or 0\n");
    }

    max++;
    }

    printf("It's done.\n");
    return 0;
}