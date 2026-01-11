#include<stdio.h>

int main(){
    char nationality[6];
    printf("Please Enter Nationality:\n[1]Indian\n[2]French\n");
    scanf("%1s",nationality);

    if(nationality[0] == 'I'){
        printf("Namaste");
    }
    else if(nationality[0] == 'F'){
        printf("Bonjour");
    }
    else{
        printf("Invalid Input");
    }

    return 0;
}