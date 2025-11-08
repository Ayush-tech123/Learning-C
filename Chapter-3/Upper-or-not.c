#include<stdio.h>

int main(){

    char c;

    printf("Enter a character to check if upper case or not : ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z'){
        printf("The character is Uppercase");
    }
    else if(c >= 'a' && c <= 'z'){
        printf("The character is Lowercase");
    }
    else{
        printf("Invalid Input");
    }

    return 0;
}