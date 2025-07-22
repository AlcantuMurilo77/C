#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

int main() {
    DIR *d;
    struct dirent *dir;

    d = opendir(".");

    if (d == NULL) {
        perror("Failed to open directory");
        return EXIT_FAILURE;
    }

    printf("Files and directories in the current directory:\n");

    while ((dir = readdir(d)) != NULL) {
        if (dir->d_name[0] != '.') {
            printf("%s\n", dir->d_name);
        }
    }

    closedir(d);
    return EXIT_SUCCESS;
}
