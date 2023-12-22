#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fptr;
    char ch;
    int count = 0;

    fptr = fopen("welcome.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file");
    } else {
        while ((ch = getc(fptr)) != EOF) {
            printf("%c", ch);
            count++;
        }
        fclose(fptr);
        printf("\nTotal Characters: %d\n", count);
    }

    return 0;
}
