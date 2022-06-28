import java.util.*;
public class prog15 {
    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter a string");
        String str=scn.nextLine();
       // printSS(str,"");
       System.out.println(isPal(str));


    }
    public static boolean isPal(String str){
        int i=0;
        int j=str.length()-1;
        while(i<j){
            if(str.charAt(i)!=str.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
  
    // reverse string O(n)
    // public static void printSS(String str, String asf) {
    //     if(str.length()==0){
    //         System.out.println(asf);
    //         return;
    //     }
    //     char ch=str.charAt(str.length()-1);
    //     String roq=str.substring(0,str.length()-1);
    //     printSS(roq,asf+ch);

        
        
    // }
}
