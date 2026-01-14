#include <stdio.h>

int main (){
    float a,b,c;
    printf("Enter length in centimeter: ");
    scanf("%f",&a);
    b=a/100;
    c=b/1000;
    printf("The length in meter: %.2f\n",b);
    printf("The length in kilometer: %.2f",c);
    return 0;
}