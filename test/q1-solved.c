#include <stdio.h>

int main() {
    int myarr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(myarr) / sizeof(myarr[0]);

    int left = 0, right = n - 1;

    while(left < right) {
        int temp = myarr[left];
        myarr[left] = myarr[right];
        myarr[right] = temp;
        left++;
        right--;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", myarr[i]);
    }

    return 0;
}
