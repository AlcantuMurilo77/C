#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

void display(unsigned char h[]) {
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        printf("%02x", h[i]);
    printf("\n");
}

int main() {
    char input[1024];
    unsigned char h[SHA256_DIGEST_LENGTH];

    printf("Enter text: ");
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n')
        input[strlen(input) - 1] = '\0';

    SHA256((unsigned char*)input, strlen(input), h);

    printf("SHA-256: ");
    display(h);

    return 0;
}
