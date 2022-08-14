#include <stdio.h>
#include <stdlib.h>
void methodeOne(){
    int M[5][5];
    int ans=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++){
            scanf("%d",&M[i][j]);
            if(M[i][j]==1){
                if(i<=2)
                    if(j<=2)
                        ans=(2-i)+(2-j);
                    else ans=(2-i)+(j-2);
                else
                    if(j<=2)ans=(i-2)+(2-j);
                    else ans=(i-2)+(j-2);
            }
        }
    printf("%d",ans);
}
int main()
{
    int M00,M01,M02,M03,M04;
    scanf("%d %d %d %d %d",&M00,&M01,&M02,&M03,&M04);
    int M10,M11,M12,M13,M14;
    scanf("%d %d %d %d %d",&M10,&M11,&M12,&M13,&M14);
    int M20,M21,M22,M23,M24;
    scanf("%d %d %d %d %d",&M20,&M21,&M22,&M23,&M24);
    int M30,M31,M32,M33,M34;
    scanf("%d %d %d %d %d",&M30,&M31,&M32,&M33,&M34);
    int M40,M41,M42,M43,M44;
    scanf("%d %d %d %d %d",&M40,&M41,&M42,&M43,&M44);

}
