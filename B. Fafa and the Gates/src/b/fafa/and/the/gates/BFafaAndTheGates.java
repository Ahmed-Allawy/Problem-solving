
package b.fafa.and.the.gates;

import java.util.Scanner;
public class BFafaAndTheGates {
    static Scanner input=new Scanner(System.in);
    public static void main(String[] args) {
        int n=input.nextInt();
        String move=input.next();
        int coins=0,x=0,y=0;
        for(int i=0;i<n;++i){
            switch(move.charAt(i)){
                case 'U':y++;
                        break;
                case 'R':x++;
                        break;
            } 
            if(i!=n-1 && move.charAt(i)==move.charAt(i+1) && x==y && x!=0)coins++;
        }
        System.out.println(coins);
    }
    
}
