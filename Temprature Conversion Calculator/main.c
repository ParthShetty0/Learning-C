#include <stdio.h>

int main(){

    //Temperature Conversion Calculator

    //Variables
    char choice = '\0';
    float Celsius = 0.0f;
    float farenheit = 0.0f;

    //Input 
    printf("Temperature Conversion Calculator\n");
    printf("C. Celsius to Farenheit\n");
    printf("F. Farenheit to Celsius\n");
    printf("Choose the type of conversion (C or F) :");
    scanf("%c", &choice);

    //Program
    if (choice == 'C'){
        printf("Enter your Temperature in Celsius : ");
        scanf("%f", &Celsius);
        farenheit = (Celsius * (9.0 / 5.0)) + 32;
        printf("The Conversion of %.2f C into Farenheit is %.2f F\n", Celsius, farenheit );
    }
    else if(choice == 'F'){
        printf("Enter your Temperature in Farenheit : ");
        scanf("%f", &farenheit);
        Celsius = (farenheit - 32 ) * (5.0 / 9.0);
        printf("The Conversion of %.2f F into Celsius is %.2f C\n", farenheit, Celsius);
    }
    else {
        printf("Choose a valid option (C or F)!!!");
    }


    return 0;
}