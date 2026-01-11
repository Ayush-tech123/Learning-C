#include<stdio.h>

int main(){
    int num[10] = {0,1,2,3,4,5,6,7,8,9};
    
    printf("Printing in Normal Order\n");

    for(int i = 0; i <= 9; i++){
        printf("%d\n", num[i]);
    }

    printf("Printing in Reverse Order\n");

    for(int i = 9; i >= 0; i--){
        printf("%d\n", num[i]);
    }
    return 0;
}