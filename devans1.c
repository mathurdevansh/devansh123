#include <stdio.h>
#include<math.h>

float squarearea(float side);
float rectanglearea(float length, float breadth);
float circlearea(float radius);

int main(){
float length=5.0;
float breadth=3.0;
float side=5;
float radius=4;
printf("area is:%f\n", rectanglearea(length,breadth));
    printf("area of square :%f\n", squarearea(side));
    printf("area of circle: %f\n",circlearea(radius));
    
    return 0;

}

float squarearea(float side){
    return side*side;
}
float circlearea(float radius){
    return 3.14*radius*radius;
}
float rectanglearea(float length, float breadth){
    return length*breadth;
}