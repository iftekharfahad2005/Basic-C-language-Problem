#include <stdio.h>
#include <math.h>
int main (){
    int a;
    float root;
    printf("Enter a number: ");
    scanf("%d",&a);
    root= sqrt(a);
    printf("The square root value of %d = %.2f",a,root);
    return 0;
}