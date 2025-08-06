#include <stdio.h>


int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf("%d\n", numbers[i]);
    }




    int scores[5] = {0};


    for(int i = 0; i < sizeof(scores)/sizeof(scores[0]); i++){
        printf("Enter a score: ");
        scanf("%d", &scores[i]);

    }
    
    printf("THE SCORES ARE:\n");
    
    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++){

        printf("%d\n", scores[i]);
    }
    return 0;
}