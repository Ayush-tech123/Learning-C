#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("1 digit\n");
        return 0;
    }

    if(n < 0)
        n = -n;

    while(n > 0) {
        n /= 10;
        count++;
    }

    printf("%d digits\n", count);
    return 0;
}
