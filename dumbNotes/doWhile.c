#include <stdio.h>

int main(){

    int number = 0;

    do{
        print("enter a number grater than 0:");
        scanf("%d", number);
    }while(number <= 0);


    return 0;
}