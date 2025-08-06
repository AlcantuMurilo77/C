#include <stdio.h>
#include <stdbool.h>


typedef struct  {
    char name[50];
    int age;
    float gpa;
    bool isFullTIme;
}Student;


int main(){

     Student student1 = {
        "Markus",
        30,
        2.5,
        true
     };

     Student student2 = {
        "Ferguson",
        22,
        1.5,
        false
     };

     Student student3 = {
        "Mary",
        35,
        4.5,
        false
     };


     Student arr[] = {student1, student2, student3};

     for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%s\n", arr[i].name);
     }



    return 0;
}