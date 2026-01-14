#include <stdio.h>

int main (){
    int length,breadth,perimeter;
   printf("Enter the length of ractangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of ractangle: ");
    scanf("%d",&breadth);
    perimeter= 2*(length*breadth);
    printf("The perimeter of ractangle: %d",perimeter);

    return 0;
}