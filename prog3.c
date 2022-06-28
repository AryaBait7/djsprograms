#include<stdio.h>
#include<stdlib.h>

//A year is a leap year if the following conditions are satisfied: 

//1.The year is multiple of 400.
//2.The year is multiple of 4 and not multiple of 100.

int main(){
    int a;
    printf("Enter a year:");
    scanf("%d",&a);

    if(a%400==0 || (a%4==0 && a%100!=0)){
        printf(" %d is a leap year",a);
    }
    else{
        printf("%d is not a leap year",a);
    }

   
    
     
}