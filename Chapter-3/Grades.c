#include<stdio.h>

int main(){

    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if(marks < 0 && marks < 30){
        printf("\nYour Grade is C");
    }
    else if(marks >= 30 && marks < 70){
        printf("\nYour Grade is B");
    }
    else if(marks >= 70 && marks < 90){
        printf("Your Grade is A");
    }
    else if(marks >= 90 && marks <= 100){
        printf("Your Grade is A+");
    }
    else{
        printf("Invalid Input");
    }

    return 0; 
}