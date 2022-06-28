#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int temp=a;
    
    int ans=0;
    while(a!=0){
        int rem=a%10;
          ans=ans+round(pow(rem,3));
          a=a/10;
    }
    if(temp==ans){
        printf("Armstrong");
    }
    else{
        printf("Not");
    }


}
