#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr1, *fptr2;
    char ch;
    fptr1 = fopen("welcome.txt", "r");
    fptr2 = fopen("output.txt", "w");
    if (fptr1 == NULL || fptr2 == NULL) {
        printf("Error opening file\n");
        system("pause");
        return 0;
    }

    while ((ch = getc(fptr1)) != EOF) {
        putc(ch, fptr2);
    }

    fclose(fptr1);
    fclose(fptr2);
    printf("File copied successfully\n");

    return 0;
}
