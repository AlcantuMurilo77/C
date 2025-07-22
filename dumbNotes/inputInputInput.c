#include <stdio.h>
#include <string.h>

int main(){

    int age;
    float gpa;
    char grade;
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nYou are %d years old!\n", age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);
    printf("\nYour gpa is %f", gpa);


    printf("\nEnter your grade: ");
    scanf(" %c", &grade);
    printf("\nYour grade is %c", grade);

    
    printf("\nType your name: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    printf("\nYour full name is: %s", name);




    return 0;
}