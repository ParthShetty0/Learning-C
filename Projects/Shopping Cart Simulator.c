#include <stdio.h>
#include <string.h>

int main(){

    //SHOPPING CART SIMULATOR
    char item[50]= "";
    float price = 0.00f;
    char currency[]= "rs";
    int quantity = 0;

 
    printf("What would you like to have?\n" );
    fgets(item, sizeof(item), stdin);
    printf("What is the price of each %s:", item );
    scanf("%f", &price);
    printf("How many would you like to have:");
    scanf("%d", &quantity);
    float total = price * quantity;
    printf("Your total will be %.2f%s", total, currency);


    return 0; 
}