#include <stdio.h>

int main() {

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;
    printf("Your gpa is %f\n", gpa);
    printf("The price is R$%.2f\n", price);
    printf("It's really could outside! I'ts %.1f\n", temperature);


    double pi = 3.14159165358979;
    printf("The value of pi is %.15lf\n", pi);

    char grade = 'A';
    printf("Your grade is %c\n", grade);

    char name[] = "Murilo Alcantu";

    printf("My name is %s\n", name);



    return 0;
}