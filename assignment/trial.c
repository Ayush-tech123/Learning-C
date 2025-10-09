#include<stdio.h>



int menu();

int main(){

    int DE, FOC, EM, AP, CS;
    int start;

    start = menu();

    printf("%d", start);

    return 0;
}

int menu(){

    int start;

    printf(".....................................\n");
    printf("\nEnter the feature you want to use :- \nCalculate Result [1] \nExit [2]\n");
    printf(".....................................\n");
    printf(" : ");
    scanf("%d", &start);

    return start;
}