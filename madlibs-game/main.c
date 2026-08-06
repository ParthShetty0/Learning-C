#include <stdio.h>
#include <string.h>

int main(){

    char noun[50] ="";
    char verb[50] ="";
    char adjective1[50] ="";
    char adjective2[50] ="";
    char adjective3[50] ="";
     
    printf("Enter a Noun : \n");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';
    printf("Enter a Verb : \n");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';
    printf("Enter a Adjective1 : \n");
    fgets(adjective1 , sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';
    printf("Enter a Adjective2 : \n");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';
    printf("Enter a Adjective3 : \n");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("Today i went to %s circus.\n", noun);
    printf("I saw a %s. He was %s.\n", verb, adjective1);
    printf("He was also %s. Which was %s.\n", adjective2, adjective3);
    printf("Thank you <3 -_-\n");

    return 0;
}
