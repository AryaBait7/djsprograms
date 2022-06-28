#include<stdio.h>
#include<math.h>



int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // int row=n;
    // int col=2*n-1;
    int nsp=n-1;
    int nst=1;
   for(int i=1;i<=n;i++){
       int val=64;
       for(int j=1;j<=nsp;j++){
             printf(" ");
       }
       for(int k=1;k<=nst;k++){
           if(k<=(nst/2)+1){
               val++;
               printf("%c",val);
           }
           else{
               val--;
               printf("%c",val);
           }
           
       }
       
     
          nsp--;
          nst+=2;
      
       printf("\n");
       
   }
    
}