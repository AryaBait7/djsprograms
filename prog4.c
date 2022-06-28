#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("enter coefficeints of a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    float del=b*b-4*a*c;
    if(del>=0){
        float r1=-b+sqrt(del)/(2*a);
        float r2=-b-sqrt(del)/(2*a);

        printf("roots are %d ansd %d ",r1,r2);
    }
    
}