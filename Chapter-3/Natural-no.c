#include<stdio.h>

int main(){
    int input;
    printf("Enter a natural number : ");
    scanf("%d", &input);

    if(input >= 1){
        printf("The entered number is natural");
    }
    else{
        printf("The entered number is not natural");
    }
    return 0;
}
