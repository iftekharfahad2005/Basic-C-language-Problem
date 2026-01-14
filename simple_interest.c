#include <stdio.h>

int main (){
    float p,n,r,i;
    printf("Enter the principal: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Time in year: ");
    scanf("%f",&n);
    i=p*n*(r/100);
    printf("The simple interest is= %.2f",i);
    return 0;
}