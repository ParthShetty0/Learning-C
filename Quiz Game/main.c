#include <stdio.h>
#include <ctype.h>

int main(){

    //Quiz
    
    //Variables
    char questions[][100] = {"Which planet is known as the Red Planet?",
                             "Which planet is closest to the Sun?",
                             "What is the largest planet in our solar system?",
                             "Which planet is the hottest in the solar system?",
                             "Which planet is famous for its prominent, visible ring system?"};
    char options[][100] = {"A) Venus\n B) Mars\n C) Jupiter\n D) Saturn",
                            "A) Mercury\n B) Earth\n C) Venus\n D) Mars",
                            "A) Saturn\n B) Neptune\n C) Jupiter\n D) Uranus",
                            "A) Mercury\n B) Venus\n C) Mars\n D) Jupiter",
                            "A) Uranus\n B) Jupiter\n C) Saturn\n D) Neptune"};
    char answers[] = {'B','A','C','B','C'};

    int questioncount = sizeof(questions) / sizeof(questions[0]);

    char guess ='\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for(int i = 0; i < questioncount; i++){
        printf("\n%s", questions[i]);
        printf("\n%s\n", options[i]);
        printf("Enter a Your Answer : ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answers[i]){
            printf("CORRECT!!!\n");
            score++;
        }
        else{
            printf("INCORRECT OPTION!!\n");
        }
    }
        printf("Your Total score is :%d\n", score);

    return 0;
}