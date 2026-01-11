#include <stdio.h>

int main() {
    int rows = 10;    
    char ch = '[';      

    for(int i = 1; i <= rows; i++) {
        for(int j = 0; j < i; j++)
            printf("%c", ch + j);
        printf("\n");
    }

    return 0;
}
