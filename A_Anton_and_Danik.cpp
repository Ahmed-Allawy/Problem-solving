#include<iostream>

using namespace std;

int main(){
    int numberOfGames=0;
    string winsName;
    cin>>numberOfGames;
    cin>>winsName;
    int winIsAnton=0,winIsDanik=0;
    for (int i = 0; i < numberOfGames; i++)
    {
        if (winsName[i]=='A')
        {
            winIsAnton++;
        }
        if (winsName[i]=='D')
        {
            winIsDanik++;
        } 
    }
   if (winIsAnton>winIsDanik)
   {
      cout<<"Anton";
   }
   else if (winIsAnton<winIsDanik)
   {
      cout<<"Danik";
   }
   else
   {
       cout<<"Friendship";
   }
   
   
    return 0;
}