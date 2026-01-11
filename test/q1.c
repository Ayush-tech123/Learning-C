#include<stdio.h>

int main(){

    int myarr[5] = {1,2,3,4,5};
    int i = 0;
    int k = 4;
    int l = 0;
    while(i < 2){
        int j = myarr[k];
        int x = myarr[l];
        myarr[k] = x;
        myarr[l] = j;
        k--;
        l++;
        i++;
    }
    i = 0;
    while(i < 5){
        printf("%d\n", myarr[i]);
        i++;
    }
    return 0;
}