#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
    if(n==0){
        return 1;
    }

    int factNm1=factorial(n-1);
    int factN=n*factNm1;
    return factN;
}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    float sum=0.0;
    for(int i=1;i<=n;i++){
        sum+= i/(factorial(i)*1.0);
    }
    printf("Sum of series is %f",sum);

}

