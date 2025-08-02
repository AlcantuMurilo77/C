#include <stdio.h>

int main(){

    int a = 0;
    int controller = 0;


    while (controller < 10){

        printf("define the value of a: ");
        scanf("%d", &a);

    if (!a){
        printf("becomes truth\n");
    } else {
        printf("keeps the lie\n");
    }

    controller++;
    }

    return 0;
}