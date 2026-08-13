#include <stdio.h>

int main(){

    //Weight Conversion Calculator

    //variables
    int choice = 0;
    float Kilograms = 0.0f;
    float Pounds = 0.0f;

    //Main Page 
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Choose a choice (1 or 2) : ");
    scanf("%d", &choice);

    //Programs Infrastructure
    if (choice == 1){
        printf("Enter your Weight in Kilograms : ");
        scanf("%f", &Kilograms);
        Pounds = Kilograms * 2.2046;
        printf("Your Weight in kilograms is %.2fkg and in pounds is %.2flbs\n", Kilograms, Pounds);
    }
    else if(choice == 2){
        printf("Enter your Weight in Pounds : ");
        scanf("%f", &Pounds);
        Kilograms = Pounds / 2.2046;
        printf("Your Weight in Pounds is %.2flbs and in Kilogram is %.2fkg\n", Pounds, Kilograms);
    }
    else{
        printf("Invalid Choice!! Please choose 1 or 2\n");
    }

    return 0;
}