#include<stdio.h>

int factorial(int num);

int main(){

    int fac = factorial(10);
    printf("%d", fac);
    return 0;
}

int factorial(int num){
    if(num == 1){
        return 1;
    }
    int numM1 = factorial(num - 1);
    int fac = numM1 * num;
    return fac;
}