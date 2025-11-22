#include<stdio.h>

int main(){

    long long fac;
    printf("Enter a factorial number : ");
    scanf("%lld", &fac);

    for(long long i = fac - 1; i >= 1; --i){

        fac = fac * i;
    }
    printf("%lld", fac);
    return 0;
}