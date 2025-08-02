#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

#define MAX_URL_LEN 2048

size_t write_callback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t total_size = size * nmemb;
    fwrite(contents, 1, total_size, stdout); 
    return total_size;
}

int main() {
    char url[MAX_URL_LEN];

    printf("Digite a URL da API: ");
    if (fgets(url, MAX_URL_LEN, stdin) == NULL) {
        fprintf(stderr, "Erro ao ler a URL\n");
        return 1;
    }

    url[strcspn(url, "\n")] = '\0';

    CURL *curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

        printf("\n=== Fazendo requisição GET para: %s ===\n\n", url);
        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            fprintf(stderr, "\nErro ao fazer requisição: %s\n", curl_easy_strerror(res));
        }

        curl_easy_cleanup(curl);
    } else {
        fprintf(stderr, "Erro ao inicializar libcurl\n");
    }

    curl_global_cleanup();
    return 0;
}
