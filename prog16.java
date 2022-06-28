import java.util.*;
public class prog16 {
    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter n");
        int n=scn.nextInt();
        System.out.println("Enter m");
        int m=scn.nextInt();
        int arr1[][]=new int [n][m];
        for(int i=0;i<arr1.length;i++){
            for(int j=0;j<arr1[0].length;j++){
                arr1[i][j]=scn.nextInt();
            }
        }
        System.out.println("Enter n2");
        int n2=scn.nextInt();
        System.out.println("Enter m2");
        int m2=scn.nextInt();
        int arr2[][]=new int [n2][m2];
        for(int i=0;i<arr2.length;i++){
            for(int j=0;j<arr2[0].length;j++){
                arr2[i][j]=scn.nextInt();
            }
        }
        
        if(m==n2){
        
        
         int res[][]=new int [n][m2];
         for(int i=0;i<res.length;i++){
            for(int j=0;j<res[0].length;j++){
                for(int k=0;k<m;k++){
                    res[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
          }
          for(int arr[]:res){
              for(int val:arr){
                  System.out.print(val+" ");
              }
              System.out.println();
          }
        }
        else{
            System.out.println("Invalid input");
        }
    
     
     }
}
