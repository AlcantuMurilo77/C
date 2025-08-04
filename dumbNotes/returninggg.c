#include <stdio.h>
#include <stdbool.h>


int sum(int x, int y);
bool ageCheck(int age);

int main(){

    int a = 5;
    int b = 7;

    printf("%d\n", sum(a, b));




    return 0;

    
}

int sum(int x, int y){
    return x + y;
}

bool ageCheck(int age){
    if (age >= 18){
        return true;
    } else{
        return false;
    }
}