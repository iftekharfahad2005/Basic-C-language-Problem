#include <stdio.h>

int main (){
    int a=10,b=3;
    float c=10,d=3;
    printf("Addition: %d + %d = %d\n",a,b,(a+b));
    printf("substraction: %d - %d = %d\n",a,b,(a-b));
    printf("Multiplication: %d * %d = %d\n",a,b,(a*b));
    printf("Integer division: %d / %d = %d\n",a,b,(a/b));
    printf("modulus: %d %% %d = %d\n",a,b,(a%b));
    printf("Float division: %.2f / %.2f = %.2f",c,d,(c/d));
    return 0;
}