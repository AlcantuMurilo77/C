#include <stdio.h>

int main(int argc, char *argv[]){
  if (argv < 2){
    printf("Usage: %s <your_name>\n", argv[0]);
    return 1;
  }

  printf("Greetings, %s!\n", argv[1]);
  return 0;
}
