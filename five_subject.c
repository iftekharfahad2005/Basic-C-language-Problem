#include <stdio.h>

int main (){
    float phy,chem,bio,ban,eng,total,average,percentage;
    printf("Enter the number of five subject: \n");
    scanf("%f%f%f%f%f",&phy,&chem,&bio,&ban,&eng);
    total=phy+chem+bio+ban+eng;
    average=(total)/5;
    percentage=(total/500)*100;
    printf("total= %.2f\n average= %.2f\n percentage= %.2f%%\n",total,average,percentage);
    return 0;
}