#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int randomNum = rand() % 2;

    printf("%d", randomNum);
    


    return 0;
}
