#include<stdio.h>

int main(){

    int num;
    printf("Enter a number ");
    scanf("%d", &num);

    if(num == 1 || num == 0)
    printf("The number is not divisible by 2");
    

    num = num % 2;

    if(num == 0)
    printf("The number is divisible by 2");

    else if(num == 1)
    printf("The number is not divisible by 2");

   return 0;

}