#include <stdio.h>

int main() {
    char ch = 'A';
    char *p = &ch;

    printf("Alphabets A to Z:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *p);
        (*p)++;
    }

    return 0;
}
