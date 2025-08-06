#include <stdio.h>

int main(){

    FILE *pFile = fopen("/home/murilo/Desktop/practicing_c/note.txt", "r");
    char buffer[1024] = {0};


    if (pFile == NULL){
        printf("uh oh\n");
        return 1;
    }


    while(fgets(buffer, sizeof(buffer), pFile ) != NULL){
        printf("%s\n", buffer);
    }
    fclose(pFile);
    return 0;
}