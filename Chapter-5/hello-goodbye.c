#include<stdio.h>

void hello(int x);
void goodbye(int y);

int main(){

    int a,b;
    printf("Enter number of Hello Worlds : ");
    scanf("%d", &a);
    printf("Enter number of Goodbye : ");
    scanf("%d", &b);

    printf("-------------------------------------------------------------------\n");
    hello(a);
    goodbye(b);
    return 0;
}

void hello(int x){
    while(x>0){
        printf("Hello World\n");
        x--;
    }
}

void goodbye(int y){
    while(y>0){
        printf("Good Bye\n");
        y--;
    }
}