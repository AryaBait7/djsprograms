#include<stdio.h>
#include<stdlib.h>

int main()
{
    float p,r,y,si;
    printf("enter a principal:");
    scanf("%f",&p);
     printf("enter a ROI:");
    scanf("%f",&r);
     printf("enter a no.of years:");
    scanf("%f",&y);
   
    si=(p*r*y)/100;
    printf("S.I =%f",si);
    return 0;

}
