#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#include "random.h"
#include "introduction.h"
#include "pointPhase.h"

int main(int argc, char *argv[])
{
    int dice1,dice2,sum;
    char initiate;
    
    introduction();
    
    printf("Press \"r\" to Roll the dice (q = Quit)\n");
    scanf("%s", &initiate);
    
    while (initiate != 'q'){
          dice1 = getRand(1,6);
          printf("Dice 1: %d\n",dice1);
          dice2 = getRand(1,6);
          printf("Dice 2: %d\n",dice2);
          
          sum = dice1+dice2;
          printf("Your roll sum is: %d\n\n",sum);
          if (sum == 7 || sum == 11){
             printf("CONGRATS you win!!! \n");}
          else if (sum == 2 || sum == 3 || sum == 12){
                  printf("SORRY you lost\n");}
          else{
               pointPhase(sum,dice1,dice2);
               }    
          printf("Play Again? (r = Roll q = Quit)\n");
          scanf("%s",&initiate);
          }
    printf("Thank You for playing \n\n");

    system("PAUSE");	
    return 0;
}
