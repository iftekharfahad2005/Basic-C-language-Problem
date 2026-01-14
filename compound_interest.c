#include <stdio.h>
#include <math.h>
int main (){
    float p,n,r,i;
    printf("Enter the principal: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Time in year: ");
    scanf("%f",&n);
    i=p*(pow((1+r/100),n));
    printf("The simple interest is= %.2f",i);
    return 0;
}