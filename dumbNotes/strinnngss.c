#include <stdio.h>
#include <string.h>

int main(){

    char fruits[][10] = {"apple", "banana", "coconut"};

    for (int i=0; i < sizeof(fruits)/sizeof(fruits[0]); i++){
        printf("%s \n", fruits[i]);
    }

    // input a lot of strings on an array of string

    char names[3][25] = {0};


    for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);

        names[i][strlen(names[i]) - 1] = '\0';

    }

        for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++){
            printf("%s\n", names[i]);

    }

    
}