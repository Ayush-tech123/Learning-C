#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int num = 0;
    for(int i = 1; i<=10; i++){
        num = n * i;
        printf("%d\n", num);
    }
    return 0;
}