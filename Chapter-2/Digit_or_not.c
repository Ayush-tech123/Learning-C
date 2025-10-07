#include<stdio.h>

int main(){

    char ch;

    printf("Enter anything : ");
    scanf("%c", &ch);

    if(ch >= 0 && ch <= 9)
    printf("The entered number is a digit");

    else
    printf("The enetered number is not a digit");

    return 0;


}