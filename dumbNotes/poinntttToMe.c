#include <stdio.h>


void birthday(int *age);

int main(){

    int age = 20;
    int *pAge = &age;

    birthday(pAge);

    return 0;
}

void birthday(int *age){
    (*age)++;
}