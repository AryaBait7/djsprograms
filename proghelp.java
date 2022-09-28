import java.util.*;
public class proghelp {
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
       int t=scn.nextInt();
       while(t>0){
           int n=scn.nextInt();
           if(n>0){
               if(n%2!=0){
                   System.out.println((int)Math.pow(n,2));
               }
               else{
                   System.out.println(2*n);
               }
           }
           else if(n==0){
               System.out.println(n+33);
           }
           t--;
       }
      }
}
