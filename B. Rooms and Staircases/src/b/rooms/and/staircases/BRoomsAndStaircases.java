
package b.rooms.and.staircases;
import java.util.Scanner;
public class BRoomsAndStaircases {
    static Scanner input=new Scanner(System.in);
    public static void main(String[] args) {
        methodTwo();
    }
    static void methodOne(){
        int t=input.nextInt();
        while(t>0){
            int n=input.nextInt();
        String str=input.next();
        int max=0,length=0;
        for(int i=0;i<n;i++){
            if(str.charAt(i)=='1'){
                for(int j=0;j<n;j++){
                    if(str.charAt(j)=='0'){
                        length=i-j;
                        if(length>0){
                            if(max<length) max=length;
                        }
                        else {
                            length*=-1;
                            if(max<length) max=length;
                        }
                        length=0;
                    }
                    else{
                        length=i-j;
                        if(length>0){
                            if(max<length) max=length;
                        }
                        else {
                            length*=-1;
                            if(max<length) max=length;
                        }
                        length=0;
                        
                    }
                }
            }
        }if(max==0)System.out.println(n+n*((int)str.charAt(0)-48));
        else System.out.println((max+1)*2);
            t--;
        }
    }
    static void methodTwo(){
        int t=input.nextInt();
        while(t>0){
            int n=input.nextInt();
            String str=input.next();
            int max=0;
            if(str.charAt(0)=='1' || str.charAt(n-1)=='1')
                System.out.println(n*2);
            else{
                for(int i=1;i<n-1;i++){
                    if(str.charAt(i)=='1'){
                        if((n-i)>i && (n-i)>max){
                            max=n-i;
                        }
                        else if(i>max){
                            max=i;
                        }
                    }
                }
                if(max==0) System.out.println(n);
                else System.out.println((max)*2);
            }
            t--;
        }
    }
}
        

