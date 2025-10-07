#include<stdio.h>

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num > 9 && num < 100)
    printf("The number is a 2 digit number");
    else
    printf("The number is not a 2 digit number");

    return 0;
}