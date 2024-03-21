/*
Brian Jordan
Programming in C 
Professor Crotty
3/26/2023
BATTING AVERAGE
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

// prototypes


int main()
{
    int playersNumber, atPlates = 0, atBats = 0, hits = 0, length;
    double batAverage;
    char outcome[100];
    
    printf("What is the players number? ");
    scanf("%d", &playersNumber);
    
    printf("\nEnter the outcomes for the player at the plate\n");
    printf("HOWSP = hit,out,walk,sacrifice,hitbyPitch,etc...\n");
    scanf("%s", outcome);
    
    length = strlen(outcome);
    atPlates = length;
    
    for (int i = 0; i < length; i++){
        if (outcome[i] == 'H') {
            hits++;
            atBats++;
            
        } else if (outcome[i] == 'O'){
            atBats++;
        }
        
        
    }
    
    batAverage = (double) hits / atBats;
    
    printf("\nNumber of times at the plate: %i\n",atPlates);
    printf("Official at-bats: %i\n", atBats);
    printf("Hits: %i\n", hits);
    printf("The batting average of player #%i = %lf\n", playersNumber, batAverage*1000);
    

    return 0;
}






