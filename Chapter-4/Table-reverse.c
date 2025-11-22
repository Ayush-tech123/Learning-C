#include<stdio.h>

int main(){

    int n;
    printf("Enter a number n : ");
    scanf("%d", &n);
    int nn;

    for(int i = 10; i >= 1; --i){
        nn = n * i;
        printf("%d\n", nn);
    }
    return 0;
}