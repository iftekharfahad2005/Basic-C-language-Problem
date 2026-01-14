#include <stdio.h>

int main (){
    int a,b,c,d;
    printf("Enter days: ");
    scanf("%d",&a);
    b=(a/365);//ignoring leap year
    c=(a%365)/7;
    d=a-((b*365)+(c*7));
    printf("%d year %d week %d days",b,c,d);
    return 0;
}