import java.util.*;
public class prog18 {
    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int nsp=n-1;
        int nst=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=nsp;j++){
                System.out.print(" ");
            }
            int cval=i;
            for(int k=1;k<=nst;k++){
                if(k<=(nst/2)+1){
                    System.out.print(cval);
                    cval--;

                }
            

                else{
                    cval++;
                    int t=cval+1;
                    int a=t+63;
                    char ch=(char)a;
                    System.out.print(ch);
                    
                }
            }

            nsp--;
             nst+=2;
             System.out.println();
            
        }  

    }
}


        
