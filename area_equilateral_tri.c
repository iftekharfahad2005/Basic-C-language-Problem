#include <stdio.h>
#include <math.h>
int main (){
    float a,area;
    printf("Enter the triangle side: ");
    scanf("%f",&a);
    area= (sqrt(3) / 4) * (a * a);
    printf("The area of the triangle is= %.2f",area);
    return 0;
}