#include<stdio.h>
#include<stdbool.h>
int main(){
    bool check=0;
    int number_of_dice=0;
    scanf("%d",&number_of_dice);
    int numberAtTheTopOfTheTower=0;
    scanf("%d",&numberAtTheTopOfTheTower);
    for(int i=0;i<number_of_dice;i++){
        int numberAtLeftSide=0 , numberAtRightSide=0;
        scanf("%d %d",&numberAtLeftSide , &numberAtRightSide);
        if(
            numberAtLeftSide==numberAtTheTopOfTheTower || 
             numberAtRightSide==numberAtTheTopOfTheTower||
             numberAtLeftSide==7-numberAtTheTopOfTheTower || 
             numberAtRightSide==7-numberAtTheTopOfTheTower
             )
        {
            check=1;
            break;
        }
    }
    printf(check?("NO"):("YES"));
}