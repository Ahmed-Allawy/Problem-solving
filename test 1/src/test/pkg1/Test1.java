

package test.pkg1;

import java.util.Scanner;
public class Test1 {

    public static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
       int n =input.nextInt() ,  m =input.nextInt(), sum=0 , b=1 ,s=0;
       int [] std = new int [n];
       for(int i=0;i<n;i++){
           std[i] =input.nextInt();
       }
       while(b>1){
       if(std[0]>=m)
           std[0]-=m;
       else std[0]=0;
       //revers
       s=std[0];
       for(int j=0;j<std.length-1;j++)
           std[j]=std[j+1];
       std[std.length-1]=s;
       /////////////////////////
       for(int j=0;j<std.length;j++)
           System.out.print(std[j]+" ");
       
       for(int j=0;j<std.length;j++)
           sum+=std[j];
       if(sum==std[0])
           b=0;
       }
       for(int j=0;j<std.length;j++)
           System.out.print(std[j]+" ");
    }
    
}
