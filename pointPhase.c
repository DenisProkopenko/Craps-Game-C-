int pointPhase(int sum,int dice1,int dice2);

int pointPhase(int sum,int dice1,int dice2)
{
    int sum2;
    
    printf("Point Phase\n");
    printf("Win if roll sum = %d\n",sum);
    printf("Lose if roll sum = 7\n\n");
    system("pause");
    
    dice1 = getRand(1,6);
    printf("Dice 1: %d\n",dice1);
    dice2 = getRand(1,6);
    printf("Dice 2: %d\n",dice2);
    
    sum2 = dice1+dice2;
    printf("Your roll sum is: %d\n\n",sum2);
    if (sum==sum2){
       printf("CONGRATS you win!!!\n");
       return 0;}
    else if (sum2 == 7){
         printf("SORRY you lost\n");
         return 0;}
    else{
         pointPhase(sum,dice1,dice2);
         }
    return 0;
    }
