#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main()
{
    int n;
    printf("Enter nth :");
    scanf("%d",&n);
    int x=0;
    int y=1;

    while(n!=0){
        printf("%d  ",x);
        int z=x+y;
        x=y;
        y=z;
        n--;
    }

}

// find Nth term using recursion

// int fib(int n)
// {
//    if (n ==0 || n==1){
//        return n;
//    }
//    int fibNm1=fib(n-1);
//    int fibNm2=fib(n-2);
//    int fibN=fibNm1+fibNm2;
//    return fibN;
// }
 
// int main ()
// {
//   int n;
//   printf("Enter nth:");
//   scanf("%d",&n);
//   printf("%d",fib(n));
// }