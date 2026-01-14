#include <stdio.h>

int main (){
    int a=100;
    long int l=111;
    long long int ll=112;
    double d=113;
    long double ld=114;
    char c='a';
    float b=129.87;
    int s=12;
    printf("%zu\n",sizeof(s));
    printf("float is %f\n",b);
    printf("integer is %d\n",a);
    printf("long int %ld\n",l);
    printf("long long int %lld\n",ll);
    printf("double is %lf\n",d);
    printf("long double is %Lf\n",ld);
    printf("character is %c\n",c);
    return 0;
}
