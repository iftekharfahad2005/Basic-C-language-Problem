#include <stdio.h>

int main (){
    int length,breadth,area;
    printf("Enter the length of ractangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of ractangle: ");
    scanf("%d",&breadth);
    area= (length*breadth);
    printf("The area of ractangle: %d",area);

    return 0;
}