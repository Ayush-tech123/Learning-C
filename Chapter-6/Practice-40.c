#include<stdio.h>

void Spa(int a, int b);
void _Spa(int *a, int *b);

int main(){
    int x, y;

    printf("Enter a number x : ");
    scanf("%d", &x);

    printf("Enter a number y : ");
    scanf("%d", &y);

    Spa(x , y);
    _Spa(&x , &y);
}

void Spa(int a, int b){
    int Sum = a + b;
    int Product = a * b;
    int Average = (a + b)/2;
    printf("The numbers were %d and %d\n Sum = %d\n Product = %d\n Average = %d\n", a,b,Sum,Product,Average);
}

void _Spa(int *a, int *b){
    int Sum = *a + *b;
    int Product = (*a) * (*b);
    int Average = (*a + *b)/2;
    printf("The numbers were %d and %d\n Sum = %d\n Product = %d\n Average = %d\n", a,b,Sum,Product,Average);
}