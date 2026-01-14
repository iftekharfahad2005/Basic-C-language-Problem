#include <stdio.h>

int main (){
    float a,b,area;
    printf("Enter the triangle heigth: ");
    scanf("%f",&a);
    printf("Enter the triangle base: ");
    scanf("%f",&b);
    area= 0.5*a*b;
    printf("The area of the triangle is= %.2f",area);
    return 0;
}