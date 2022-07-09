#include<stdio.h>
#include<math.h>

void reverse(int t); // Reverse the same number
void reverse2(int t); // Reverse the temp number
void sum(int t);

int main()
{
    
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int t=n;
    reverse2(n);
    printf("\n");
    sum(n);
    
}

// void reverse(int t){
    
//     int res=0;
//     int nod=0;
//     int x=t;
//     while(x!=0){
//         nod++;
//         x=x/10;
//     }
//     int p=(pow(10,nod-1));


//     while(t!=0){
//       res+=(t%10)*p;
//       t=t/10;
//       p=p/10;
//     }
//     printf("Reverse of a number: %d",res);
// }

void reverse2(int t){
    int sum=0;
    while(t!=0){
        int rem=t%10;
        sum=sum*10+rem;
        t=t/10;
    }
    printf("Reverse of number : %d",sum);
}

void sum(int n){
    int res=0;
    while(n!=0){
        res+=n%10;
        n=n/10;
    }
    printf("Sum:%d",res);
}

