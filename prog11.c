#include<stdio.h>
#include<stdlib.h>
long fact(int n);
 // Calculate nCr
int main()
{
    int n,r;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);
     long ans=fact(n)/(fact(r)*fact(n-r));
     printf("%ld",ans);


}

long fact(int n){
    if(n==0){
        return 1;
    }
    int fN1=fact(n-1);
    int factN=n*fN1;
    return factN;
}