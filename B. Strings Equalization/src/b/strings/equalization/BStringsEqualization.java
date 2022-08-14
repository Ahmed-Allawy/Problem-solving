
package b.strings.equalization;

import java.util.Scanner;
public class BStringsEqualization {
static Scanner input= new Scanner(System.in);
    public static void main(String[] args) {
        int q=input.nextInt();
        while(q>0){
            String a=input.next();
            String t=input.next();
            if(((a.length()==1 || t.length()==1) && !a.equals(t)) || (noCharEqual(a,t)))
                System.out.println("No");
            else System.out.println("Yes");
            q--;
        }
        
    }
    static boolean noCharEqual(String a , String t){
        for(int i=0;i<a.length();i++)
            for(int j=0;j<t.length();j++)
                if(a.charAt(i)==t.charAt(j))
                    return false;
        return true;
    }
    
}
