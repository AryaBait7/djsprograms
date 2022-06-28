import java.util.*;
import java.util.Scanner;
public class prog14{
       public static void main(String args[]){
           Scanner scn=new Scanner(System.in);
           System.out.println("Enter a number");
           int n=scn.nextInt();
           int arr[]=new int[n];
           for(int i=0;i<arr.length;i++){
               arr[i]=scn.nextInt();
           }

           for(int pass=1;pass<n;pass++){
               for(int i=0;i<n-pass;i++){
                   if(arr[i]>arr[i+1]){
                       swap(arr,i,i+1);
                   }
               }
           }
           System.out.println("After Sorting:");
           for(int i=0;i<n;i++){
               System.out.print(arr[i]+" ");
           }
       }
       public static void swap(int arr[],int i,int j){
           int t=arr[i];
           arr[i]=arr[j];
           arr[j]=t;
       }
}