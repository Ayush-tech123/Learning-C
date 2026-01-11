#include<stdio.h>

int main(){
    int a, b;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    p1 = &a;
    p2 = &b;

    if(*p1 > *p2)
    printf("Maximum = %d\n", *p1);
    else
    printf("Maximum = %d\n", *p2);

    return 0;
}