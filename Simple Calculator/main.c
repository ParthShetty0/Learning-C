#include <stdio.h>

int main(){

    //Variables
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    //Input 
    printf("Welcome to Simple Calculator\n");
    printf("Enter a number : ");
    scanf("%lf", &num1);
    printf("Enter a operator (+ - * /) : ");
    scanf(" %c", &operator);
    printf("Enter a number : ");
    scanf("%lf", &num2);
    
    //Output Architecture
    switch(operator){
        case '+':
        result = num1 + num2;
        break;
        
        case '-':
        result = num1 - num2;
        break;
        
        case '*':
        result = num1 * num2;
        break;
        
        case '/':
        if (num2 == 0){
            printf("You can't divide by 0\n");
            return 0;}
        
        else if (num1 == 0){
            printf("Your divisor cannot be 0\n");
            return 0;
        }

        else{
        result = num1 / num2;
        break;
        }
        
        default :
        printf("Invalid Input!! Try Again\n");
        return 0;
    }

    printf("Result = %.2lf\n", result);

    return 0;
}