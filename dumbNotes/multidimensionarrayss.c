#include <stdio.h>

int main(){

    int numbers[][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3},
    };


    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){

        for (int j = 0; j < sizeof(numbers)/sizeof(numbers[0][0]); j++){
            printf("%d", numbers[i][j]);
        }
        printf("\n");

    }
    return 0;
}