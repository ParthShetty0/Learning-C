#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>


int main(){

    //DIGITAL CLOCK 

    //variables
    time_t rawtime = 0;
    struct tm *ptime = NULL;
    bool isrunning = true;

    printf("DIGITAL CLOCK\n");

    while(isrunning){
        
        time(&rawtime);

        ptime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", ptime->tm_hour, ptime->tm_min, ptime->tm_sec);
        
        fflush(stdout);

        sleep(1);
    }
    return 0;
}