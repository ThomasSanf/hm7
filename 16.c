#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ENTER 13
#define MAX 80

int main(void) {
    FILE *fptr;
    char str[MAX], ch;
    int i = 0;

    fptr = fopen("output.txt", "a");
    printf("This is a text\n");

    while ((ch = getche()) != ENTER && i < MAX) {
        str[i++] = ch;
    }
    str[i] = '\0';

    fprintf(fptr, "%s\n", str);
    fclose(fptr);

    printf("\n");
    system("pause");

    return 0;
}
