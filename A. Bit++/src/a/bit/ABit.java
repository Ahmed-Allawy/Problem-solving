
package a.bit;

import java.util.Scanner;
public class ABit {
static Scanner input=new Scanner(System.in);
    public static void main(String[] args) {
        int n;
        int x = 0;
        n=input.nextInt();
        String s;
        for(int i=0;i<n;i++){
            s=input.next();
            if(s.equals("X++") || s.equals("++X")) x++;
            else x--;
        }
        System.out.print(x);
    }
    
}
