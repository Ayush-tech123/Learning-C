#include <stdio.h>

int main() {
    char s1[100], s2[100], result[100];
    int freq[256] = {0}, k = 0;

    printf("Enter the first string (Freedom Fighter): ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string (Independence Day): ");
    fgets(s2, sizeof(s2), stdin);

    for(int i = 0; s1[i]; i++)
        freq[(unsigned char)s1[i]] = 1;

    for(int i = 0; s2[i]; i++) {
        if(!freq[(unsigned char)s2[i]])
            result[k++] = s2[i];
    }
    result[k] = '\0';

    printf("Resultant string: %s", result);

    return 0;
}
