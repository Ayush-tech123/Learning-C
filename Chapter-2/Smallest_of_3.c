#include<stdio.h>

int main(){

    int a, b, c;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    printf("Enter c : ");
    scanf("%d", &c);

    if(a < b && a < c)
    printf("A is the smallest");

    else if(b < c && b < a)
    printf("B is the smallest");

    else
    printf("C is the smallest");

    return 0;
    
}