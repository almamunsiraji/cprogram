#include<stdio.h>
float squreArea( float side);
float circleArea( float rad);
float rectangleArea(float a,float b);


int main(){
    float a=10.0;
    float b=45.00;
    float side=9;
    float rad=9;
    printf("rectangleArea is= %f\n",rectangleArea(a,b));
    printf("SqureArea is=%f\n",squreArea(side));
    printf("CircleArea is=%f\n",circleArea(rad));
    return 0;
}

float squreArea(float side){
    return side * side;
}
float circleArea(float rad)
   { return 3.14 * rad * rad;}
float rectangleArea(float a,float b){
    return a * b;
}