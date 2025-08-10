#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int score ;
    int random ;
    int number ;
    int playgame ;

    srand( time( NULL ) ) ;

    do {
        printf( "Do you want to play game (1=play,-1=exit) : \n" ) ;
        scanf( "%d",&playgame ) ; 

        if ( playgame == 1 ) {
            score  = 100 ;
            random = rand() % 100 + 1 ;
            int numfirst = 1 ;
            int numlast  = 100 ;
            
            while (1) {
                
                printf( "Guess the winning number (%d-%d) : \n",numfirst, numlast ) ;
                scanf( "%d", &number ) ;

                if ( number == random) {
                    printf( "Score this game: %d\n",score ) ;
                    printf( "That is correct! The winning number is %d.\n" ,random ) ;
                    break;

                } else if ( number > random ) {
                    score -= 10 ;
                    numlast = number - 1 ;
                    printf( "Sorry, the winning number is LOWER than %d. (Score= %d) \n",number, score ) ;
                   
                } else if ( number < random ) {
                    score -= 10 ;
                    numfirst = number + 1 ;
                    printf( "Sorry, the winning number is HIGHER than %d. (Score=%d) \n",number ,score ) ;
                } 

                if (score <= 0) {
                    printf("Game over! Your score is 0.\n") ;
                    break;
                } //end if
            }
            
            } else if (playgame == -1) {
                printf("See you again.\n") ;
            } //end if
            
    }
    while (playgame != -1 ) ;
    return 0 ;
}
