import java.util.*;
public class prog17 {
    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter x:");
        int x=scn.nextInt();
        System.out.println("Enter n:");
        int n=scn.nextInt();
        float sum=0;
        int p=1;
        int powf=1;
        for(int i=1;i<=n;i++){
    
            sum=(p)*(sum+(int)Math.pow(x,powf)/fact(powf));
            powf+=2;
            p=-1*p;
    
        }
        System.out.println(sum);

    }

    public static int fact(int n){
        if(n==0){
            return 1;
        }
        int factNm1=fact(n-1);
        int factN=n*factNm1;
        return factN;
    }
  
  
}