#include <stdio.h>

int main (){
    int a,b,c;
    printf("Enter the 1st angle: ");
    scanf("%d",&a);
    printf("Enter the 2nd angle: ");
    scanf("%d",&b);
    c=180-(a+b);
    printf("3rd angle of the triangle is: %d",c);
    return 0;
}