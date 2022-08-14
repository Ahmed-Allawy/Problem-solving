
package a.jzzhu.and.children;
import java.util.Scanner;
public class AJzzhuAndChildren {
    public static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        double x=0;
       int n=input.nextInt(),m=input.nextInt();
       int max=0;  /////////max number in array
       int index=0; ///////index of max number 
       int[] std = new int [n];
       max=std[0];////let std[i] is max number(inetial)
       for(int i=0;i<std.length;i++){
           /////enter array elements
           std[i]=input.nextInt();
           ////find fraction of the number ( as Math.ceil)
           x= 1.0*std[i]/m;
           std[i]=std[i]/m;
           if(x!=std[i]*1.0) std[i]+=1;
           /////check if this element is max number in array or not
           if(max<=std[i]) {
               ////store its index and value
               index=i; 
               max=std[i];
           }
       }
       System.out.println(index+1);
    }
}
