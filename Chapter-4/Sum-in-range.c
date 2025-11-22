#include<stdio.h>

int main(){

    int a, b;
    printf("Enter the smaller number a : ");
    scanf("%d", &a);
    printf("Enter the larger number b : ");
    scanf("%d", &b);

    int sum = a;
    for(int i = a + 1 ; i <= b; i++){
        sum = sum + i;
    }
    printf("The sum from %d to %d is %d",a,b,sum);
    return 0;
}