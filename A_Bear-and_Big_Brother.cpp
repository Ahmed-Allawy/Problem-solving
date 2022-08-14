#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int weightOfLimak=0 , weightOfBob=3;
    cin>>weightOfLimak>>weightOfBob;
    //cout<<round(((log(weightOfBob)-log(weightOfLimak))/(log(3)-log(2))))+1;
   int  numberOfYears=0;
    while(weightOfLimak<=weightOfBob){
        weightOfLimak*=3;
        weightOfBob*=2;
        numberOfYears++;
    }
    cout<<numberOfYears;
     return 0;
}
 