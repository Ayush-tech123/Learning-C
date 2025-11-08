#include<stdio.h>
#include<math.h>

int main(){

    int num;
    printf("Enter a number to check if it armstrong or not : ");
    scanf("%d", &num);

    int a = 0;
    while(num >= 1000 && num <= 9999){
        num = num - 1000;
        ++a;
    }
    int b = 0;
    while(num >= 100 && num <= 999){
        num = num - 100;
        ++b;
    }
    int c = 0;
    while(num >= 10 && num <= 99){
        num = num - 10;
        ++c;
    }

    int digits;
    if(a > 0){
        digits = 4;
    }
    else if(b > 0){
        digits = 3;
    }
    else if(c > 0){
        digits = 2;
    }
    else if(num > 0){
        digits = 1;
    }
    else{
        printf("Invalid Input");
    }

    int armstrong = pow(a,digits) + pow(b,digits) + pow(c,digits) + pow(num,digits);

    num = (a*1000) + (b*100) + (c*10) + num;

    if(armstrong == num){
        printf("The number is a armstrong number");
    }
    else{
        printf("The number is not a armstrong number");
    }
    return 0;
}