#include<stdio.h>

//Declaring Functions
int Area_Rectangle(int length, int breadth);

float Area_Circle(float radius);

int Area_Square(int side);

int main(){

    int function;
    printf("Select the Shape whose area you want to calculate\n[1]Rectangle\n[2]Circle\n[3]Square\n[4]Exit\n");
    scanf("%d", &function);

    if(function == 1){
        int length, breadth;
        printf("Enter the length : ");
        scanf("%d", &length);

        printf("Enter the breadth : ");
        scanf("%d", &breadth);

        int Area = Area_Rectangle(length , breadth);
        printf("%d", Area);
    }
    else if(function == 2){
        float radius;
        printf("Enter the radius of the circle : ");
        scanf("%f", &radius);
        
        float Area = Area_Circle(radius);
        printf("%.2f", Area);
        
    }
    else if(function == 3){
        int side;
        printf("Enter the side of the sqaure : ");
        scanf("%d", &side);

        int Area = Area_Square(side);
        printf("%d", Area);
    }
    else if(function == 4){
        printf("Thank you for using the code");
    }
    else{
        printf("Please select a function from 1 to 4");
    }
   
    return 0;
}

//Function to calculate Area of Rectangle
int Area_Rectangle(int length, int breadth){
    int Area = length * breadth;
    return Area;
}

//Function to calculate Area of Circle
float Area_Circle(float radius){
    float Area = 3.14 * radius * radius;
    
    return Area;
}


//Function to calculate Area of Square
int Area_Square(int side){
    int Area = side * side;
    return Area;
}

