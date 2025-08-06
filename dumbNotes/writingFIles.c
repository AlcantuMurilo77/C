#include <stdio.h>


int main(){

    char filepath[] = "/home/murilo/Desktop/practicing_c/note.txt";
    char text[] = "This is what you want,\nThis is what you get.";

    FILE *pFile = fopen(filepath, "w");

    if (pFile == NULL){
        printf("Could not open file.\n");
        return 1;
    }

    fprintf(pFile, "%s", text);


    fclose(pFile);


    return 0;
}