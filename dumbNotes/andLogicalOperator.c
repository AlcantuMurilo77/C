#include <stdio.h>
#include <stdbool.h>


int main(){

    float temp = 30;
    bool sunny = false;


    if(temp >= 0 && temp <=30 && sunny){
        printf("It's between 0 and 30 and its sunny\n");
    } else{
        printf("It's either less than 0 or greater than 30 and its not sunny\n");
    }



    return 0;
}