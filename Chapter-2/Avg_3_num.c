#include<stdio.h>

int main(){

    int one, two, three;

    printf("Enter first number : ");
    scanf("%d", &one);

    printf("Enter second number : ");
    scanf("%d", &two);

    printf("Enter third number : ");
    scanf("%d", &three);

    printf("The average of the three is %d", (one + two + three) / 3);

    return 0;
    
}