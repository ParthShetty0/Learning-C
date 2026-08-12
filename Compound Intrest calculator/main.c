#include <stdio.h>
#include <math.h>

int main(){

    //Compound interest Calculator
    printf("Compound Interest Calculator\n");
    
    //Variables
    double principal = 0.0;
    double rate = 0;
    int interest_compounded = 0;
    int years = 0;
    double amount = 0.0;
    double Compound_interest = 0.0;

    //Input 
    printf("Enter Principal Amount (P) : ");
    scanf("%lf", &principal);
    printf("Enter Interest Rate (r) : ");
    scanf("%lf", &rate);
    rate = rate/100;
    printf("Enter Number of times that interest is compounded per year (n): ");
    scanf("%d", &interest_compounded);
    printf("Enter no of years invested (t) : ");
    scanf("%d", &years);

    //Calculation
    amount = principal * pow(1+ rate / interest_compounded, interest_compounded * years);

    //output 
    printf("The total Amount will be : %.2lf\n", amount);
    Compound_interest = amount - principal;
    printf("The final total amount after %d years is %lf\n with a total compound Interest of %lf\n" , years, amount, Compound_interest);

    return 0; 
}