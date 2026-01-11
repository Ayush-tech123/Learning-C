#include<stdio.h>

int main(){
    int myarr[10] = {14,53,65,76,34,87,42,86,65,69};
    int n = sizeof(myarr) / sizeof(myarr[0]);
    int i = 0;
    int j = 1;
    int k;
    int x;
    while(i < n && j < n){
        if(myarr[i] > myarr[j]){
            x = myarr[i];
            j++;
        }
        else if(i == j){
            j++;
        }
        else{
            x = myarr[j];
            i++;
        }
    }
    i = 0;
    j = 1;
    while(i < n && j < n){
        if(myarr[i] == x || myarr[j] == x){
            i++;
            j++;
        }
        else if(myarr[i] > myarr[j]){
            k = myarr[i];
            j++;
        }
        else if(i == j){
            j++;
        }
        else{
            k = myarr[j];
            i++;
        }
    }
    printf("%d\n", x);
    printf("%d", k);

}    