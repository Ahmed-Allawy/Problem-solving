
package ieee_zsb;


public class IEEE_ZSB {

    public static void main(String[] args) {
        int array [] = {3,13,43,-5,3,423,3,1,3,14};
        int a=3;
        int count=0;
        int lastOccurrence=0;
        for(int i=0;i<array.length;++i){
            if(a==array[i]){
                count++;
                lastOccurrence=i;
            }
        }
        if(count==0)System.out.println("The number didn't not appear in this array");
        else System.out.println(count+"\n"+lastOccurrence);
        String s1="ahmed";
        String s2="ahmed";
        String s3 = new String("ahmed");
        String s4 = new String("ahmed");
        System.out.println(s1==s2);
        System.out.println(s3==s2);
        System.out.println(s3.equals(s4));
    }
    
}
