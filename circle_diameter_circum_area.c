#include <stdio.h>

int main (){
    float r,diameter,circumference,area,pi=3.1416;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    diameter= 2*r;
    circumference= 2*pi*r;
    area= pi*r*r;
    printf("Diameter of the cicle: %.2f\n",diameter);
    printf("circumference of the circle: %.2f\n",circumference);
    printf("Area of the cicle: %.2f\n",area);
    return 0;
}