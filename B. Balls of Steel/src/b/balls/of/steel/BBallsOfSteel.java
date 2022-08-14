
package b.balls.of.steel;

import java.util.Scanner;
public class BBallsOfSteel {

    static Scanner input=new Scanner(System.in);
    public static void main(String[] args) {
        int t=input.nextInt();
        while(t>0){
            int n=input.nextInt(),k=input.nextInt();
            int [] x=new int [n];
            int [] y=new int[n];
            int c=0;
            for(int i=0;i<n;++i){
                x[i]=input.nextInt();
                y[i]=input.nextInt();
            }
            for(int i=0;i<n;++i){
                c=0;
                for(int j=0;j<n;++j){
                    if((Math.abs(x[j]-x[i])+Math.abs(y[j]-y[i]))<=k)
                        c++;
            }
                if(c==n) break;
            }
            if(c>=n)System.out.println("1");
            else System.out.println("-1");
            t--;
        }
    }
}
