#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getuserChoice();
int getcomputerChoice();
void choosewinner(int userchoice, int computerchoice);

int main(){

    srand(time(NULL));
    
    printf("*** ROCK PAPER SCISSORS ***\n");

    int userchoice =  getuserChoice();
    int computerchoice = getcomputerChoice();

    switch(userchoice){
        case 1 :
        printf("You choose ROCK !!\n");
        break;

        case 2 :
        printf("You choose PAPER !!\n");
        break;

        case 3 :
        printf("You choose SCISSOR !!\n");
        break;
        
    }

    switch(computerchoice){
        case 1 :
        printf("Computer choose ROCK !!\n");
        break;

        case 2 :
        printf("Computer choose PAPER !!\n");
        break;

        case 3 :
        printf("Computer choose SCISSOR !!\n");
        break;
        
    }

    choosewinner(computerchoice, userchoice);

   


    return 0;
}

int getuserChoice(){
    int choice = 0;

    do{
    printf("Choose appropiate option (1-3)!!\n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSOR\n");
    printf("Your Option : ");
    scanf("%d", &choice);
    }while(choice > 3 || choice < 1);


    return choice;
}

int getcomputerChoice(){
    return ((rand() % 3) + 1);
}
void choosewinner(int computerchoice, int userchoice){

    if(computerchoice == userchoice){
        printf("It is a TIE !!!\n");
    }

    else if((computerchoice == 1 && userchoice == 2) ||
            (computerchoice == 2 && userchoice == 3) ||
            (computerchoice == 3 && userchoice == 1)){

                printf("You WIN !!!!\n");

            }
    else{
        printf("You LOSE !!!!\n");
    }
}
