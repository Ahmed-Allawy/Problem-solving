#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int t=0;
    scanf("%d",&t);
    while(t--){
        int n=0;
        scanf("%d",&n);
        ///find the matrix which will contain the number
        int root=ceil(sqrt(n));
        ///find max number in this matrix
        int maxNumber=root*root;
        ///if this number (n) in the same row of the max number
        if((maxNumber-n)<root)
            /// Row will equal root(matrix row)
            ///column will equal to distance between max number and this number(n)
                                    ///(maxNumber-n)+1
            printf("%d %d\n",root,maxNumber-n+1);
                        ///..........................///
        ///if this number (n) does not in the same row with max number
        else
            ///column will equal root(matrix row)
                  ///three steps to find #Row if this number
            ///step 1: find the distance between max number and this number(n)
                                     ///(maxNumber-n)+1
            ///step 2: find distance between #Row of max number and #Row of this Number(n)
                                    ///((maxNumber-n)+1)-root
            ///step 3: find the #Row of this Number(n)
                                   ///root-(((maxNumber-n)+1)-root)
            printf("%d %d\n",root-(((maxNumber-n)+1)-root),root);
    }
}
