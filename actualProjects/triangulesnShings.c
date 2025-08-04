#include <stdio.h>

int main(){

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the symbol u gonna use: ");
    scanf(" %c", &symbol);



    for (int i = 0; i < rows; i++){

        for (int j = 0; j <= columns; j++ ){
            printf("%c", symbol);
        }
        printf("\n");

    }


    return 0;
}