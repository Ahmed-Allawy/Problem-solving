
//  https://codeforces.com/group/T3p02rhrmb/contest/334358/problem/P
import java.util.Scanner;
public class main
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine().trim();
        String[] arr = s.split("[\\W|\\d|_]+");
        if(arr[0].length()==0)
            System.out.println(arr.length-1);
        else System.out.println(arr.length);

    }
}
