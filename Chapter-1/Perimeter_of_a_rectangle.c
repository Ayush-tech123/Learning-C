#include<stdio.h>

int main(){

    int a, b;
    
    printf("Enter length ");
    scanf("%d", &a);

    printf("Enter breadth ");
    scanf("%d", &b);

    printf("The perimeter is %d", 2 * (a + b));

    return 0;
}