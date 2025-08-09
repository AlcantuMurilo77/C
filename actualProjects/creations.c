#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEXT 2048
#define FILE_NAME "osint_report.txt"
//TODO accept args
void createReport() {
    FILE *f = fopen(FILE_NAME, "w");
    if (!f) {
        printf("Error creating report.\n");
        return;
    }
    char buffer[MAX_TEXT];
    printf("Enter report content (end with a single line 'END'):\n");
    while (1) {
        fgets(buffer, sizeof(buffer), stdin);
        if (strncmp(buffer, "END", 3) == 0) break;
        fputs(buffer, f);
    }
    fclose(f);
    printf("Report saved.\n");
}

void readReport() {
    FILE *f = fopen(FILE_NAME, "r");
    if (!f) {
        printf("No report found.\n");
        return;
    }
    char buffer[MAX_TEXT];
    printf("=== Report Content ===\n");
    while (fgets(buffer, sizeof(buffer), f)) {
        printf("%s", buffer);
    }
    fclose(f);
    printf("\n======================\n");
}

void editReport() {
    FILE *f = fopen(FILE_NAME, "a");
    if (!f) {
        printf("No report to edit.\n");
        return;
    }
    char buffer[MAX_TEXT];
    printf("Enter additional content (end with a single line 'END'):\n");
    while (1) {
        fgets(buffer, sizeof(buffer), stdin);
        if (strncmp(buffer, "END", 3) == 0) break;
        fputs(buffer, f);
    }
    fclose(f);
    printf("Report updated.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Create report\n2. Read report\n3. Edit report\n4. Exit\nChoose: ");
        scanf("%d", &choice);
        getchar();
        if (choice == 1) createReport();
        else if (choice == 2) readReport();
        else if (choice == 3) editReport();
        else if (choice == 4) break;
        else printf("Invalid choice.\n");
    }
    return 0;
}
