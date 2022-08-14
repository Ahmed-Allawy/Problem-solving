
package a.countdown1;

import java.util.Scanner;

public class ACountdown1 {

   
    public static Scanner input=new Scanner(System.in);
    public static void main(String[] args) {
        int t;
        t=input.nextInt();
        while(t>0){
            int n,count=0;
            n=input.nextInt();
            String string ;
            string = input.next();
            for(int i=0;i<n;i++){
                if(string.charAt(i)!=48  && i==n-1)
                    count+=string.charAt(i)-48;
                else if(string.charAt(i)!=48)
                    count+=1+string.charAt(i)-48;
            }
            System.out.println(count);
            t--;
        }
    }
    
    
}
