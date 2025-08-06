#include <stdio.h>
#include <stdlib.h>

// function that dynamically allocates a specified number of bytes in memory
int main(){

    int number = 0;
    printf("How many elements: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if (grades == NULL){
        prinft("grades is null\n");
        return 1;
    }

    for (int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);

    }

    for (int i = 0; i < number; i++){
        printf("%c\n", grades[i]);
    }


    free(grades);
    grades = NULL;


    return 0;
}