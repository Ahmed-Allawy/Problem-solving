/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package simplearraysum;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author أحمد علاوي
**/

public class SimpleArraySum {
    
//    public static String timeConversion(String s) {
//    // Write your code here
//        char a=(char)((int)s.charAt(1)+2);
//        if(s.charAt(8)=='P')
//        return ""+((((int)a)>57)?((char)(s.charAt(0)+2)+""+((int)a-58)+s.substring(2, 8))
//                :((s.charAt(0)=='1' && s.charAt(1)=='2')?("12"+s.substring(2, 8))
//                :(char)(s.charAt(0)+1)+""+a+s.substring(2, 8)));
//        else return ""+((s.charAt(0)=='1' && s.charAt(1)=='2')?("00"+s.substring(2, 8)):(s.substring(0,8)));
//    }
    public static int[] getCorners(int[][]a){
        int[]c=new int[4];
        c[0]=a[0][0];
        c[1]=a[0][2];
        c[2]=a[2][0];
        c[3]=a[2][2];
        return c;
    }
    public static int[] getMiddelEdges(int[][]a){
        int[]m=new int[4];
        m[0]=a[0][1];
        m[1]=a[1][0];
        m[2]=a[1][2];
        m[3]=a[2][1];
        return m;
    }
    public static int formingMagicSquare(int[][]a) {
        int number=0;
        //center must == 5
        number=a[1][1]-5;
        if(number<0)number*=-1;
        //corners
        int[] c = {2,4,6,8};
        int []corners=getCorners(a);
        int index=0;
        //get missing number 
        for(int i=0;i<c.length;i++)
            for(int j=0;j<c.length;j++)
                if(corners[i]==c[j])
                    c[j]=0;
        //get index of missing number;
        for(int i=0;i<4;i++)
            if(c[i]!=0)
                index=i;
        for(int j=0;j<c.length;j++)
            if(corners[j]%2!=0){
                if(corners[j]-c[index]>0)
                    number+=corners[j]-c[index];
                else number-=corners[j]-c[index];
            }
        //middel edges
        int[] m = {1,3,7,9};
        return number;
    }
    public static void main(String[] args) {
//        for(int i=0;i<=5;i++){
//            for(int space=5-i;space>0;space--)
//                System.out.print(" ");
//            for(int shape=i;shape>0;shape--)
//                System.out.print("#");
//            System.out.println();
//        }
    List<Integer> b = new ArrayList<>();
    //b.add(1);
    b.add(100);
    //b.add(96);
    List<Integer> a = new ArrayList<>();
    //a.add(2);
    a.add(1);
    int [][] array ={{5,3,4},{1,3,8},{6,4,2}};
    //System.out.println(formingMagicSquare(array));
    for(int c=0;c<4;c++)
        System.out.print(getMiddelEdges(array)[c]+" ");
    System.out.println();
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            System.out.print(array[i][j]+" ");
        System.out.println();
    }
    }
    
} 

    

