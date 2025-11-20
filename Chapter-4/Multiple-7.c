#include<stdio.h>

int main(){

    for(int n = 8; n % 7 != 0; n){
    printf("Enter a multiple of 7 ");
    scanf("%d", &n);
    }
    
}