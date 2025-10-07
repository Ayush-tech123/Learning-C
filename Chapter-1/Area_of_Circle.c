#include<stdio.h>
#define pi 3.1452

int main(){

    float radius;
    printf("Enter the radius of the circle ");
    scanf("%f", &radius);

    printf("The area of the circle is %f", pi * radius * radius);

    return 0;
}
