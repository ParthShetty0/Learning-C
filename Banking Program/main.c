#include <stdio.h>

void checkbalance(float balance);
float depoist();
float withdraw(float balance);

int main(){

    //Banking Program

    //variable
    int choice = 0;
    float balance = 0.0f;

    printf("\nWELCOME TO OUR BANK\n");

    do{
        printf("\nSelect Appropiate Option:\n");
        printf("1.CHECK BALANCE\n");
        printf("2.DEPOIST MONEY\n");
        printf("3.WITHDRAW MONEY\n");
        printf("4.EXIT\n");
        printf("CHOOSE YOUR OPTION :");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkbalance(balance);
                break;
            case 2:
                balance += depoist();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("Thank you for Banking with us\n");
                break;
            default :
                printf("INVALID OPTION!! PLEASE SELECT BETWEEN 1-4\n");
                break;
        }

        }while(choice != 4);

    




    return 0;
}

void checkbalance(float balance){
    printf("Your Current Balance is Rs.%.2f\n", balance);

}
float depoist(){
    float amount = 0.0f;

    printf("ENTER AMOUNT TO DEPOIST : ");
    scanf("%f", &amount);

    if(amount < 0 ){
        printf("Invalid Amount. Please Enter a valid amount");
        return 0.0f;
    }
    else{
        printf("Successfully Depoisted Rs.%.2f", amount);
        return amount;}
}
float withdraw(float balance){
    float amount = 0.0f;

    printf("Enter the amount to withdraw :");
    scanf("%f", &amount);

    if(amount < 0 ){
        printf("Invalid amount!!!!\n");
        return 0.0f;
    
    }
    else if(amount > balance){
        printf("Insufficient Balance! Your balance is %.2f\n");
        return 0.0f;
    }
    else{
        printf("Successfully Withdrew %.2f\n", amount);
        return amount;
    }
    
}