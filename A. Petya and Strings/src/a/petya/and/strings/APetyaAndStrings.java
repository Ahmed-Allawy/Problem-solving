
package a.petya.and.strings;
import java.util.Scanner;
public class APetyaAndStrings {
    static Scanner input=new Scanner(System.in);
    public static void main(String[] args) {
        String str1,str2;
        str1=input.next();
        str2=input.next();
       if(str1.compareToIgnoreCase(str2)<0)System.out.print("-1");
       else if(str1.compareToIgnoreCase(str2)>0)System.out.print("1");
       else System.out.print("0");
    }
    
}
