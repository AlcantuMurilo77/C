#include <stdio.h>
#include <string.h>


void happyBirthday(char name[], int age){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!\n");
    printf("\nYou are %d years old.\n", age);

}


int main(){

    char name[30] = "\0";
    int age = 0;

    printf("Type in your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    printf("\nType in how old you are getting: ");
    scanf("%d", &age);

    happyBirthday(name, 23);



    return 0;
}